

#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
//#include <conio.h>
#include "Way_.h"
#include "Way2_.h"
#include "RegMng_.h"
#include "RegWay_.h"
#include "Random.h"

#if defined(SPEC_CPU)
// This is the C99 standard macro to define the printf format to print a 64 bit integer
// -D__STDC_FORMAT_MACROS will probably need to be defined to pull this definition from 
// inttypes.h (if present)
#ifndef PRId64
#define PRId64 "lld"
#endif
#endif /* SPEC_CPU */

// a real bad hack to compile
// this: jray
// This is not defined anywhere!!
#if !defined(SPEC_CPU_WINDOWS) && !defined(_MAX_PATH)
#define _MAX_PATH (1024*4)
#endif

wayobj way;
way2obj way2;
regmngobj regmng;
regwayobj regway;


struct workinfot
{
  char mapfilename[_MAX_PATH];
  int regionsize;
  int wayqu;
  int riverwayqu;
  int landwayqu;
  int regwayqu;
  int randommaplx;
  int randommaply;
  float randommapdensity;
  int randommapregionsize;
  int randommapwayqu;
  int randommapregwayqu;
};

struct statinfot
{
  double createregtime;
  double createwaytime;
  double createriverwaytime;
  double createlandwaytime;
  double createregwaytime;
  i64 waylength;
  i64 riverwaylength;
  i64 landwaylength;
  i64 wayqu;
  i64 riverwayqu;
  i64 landwayqu;
  i64 regwaylength;
  i64 regwayqu;

  void print();

  void init()
  { createregtime=0; createwaytime=0; createriverwaytime=0; createlandwaytime=0; createregwaytime=0;
    waylength=0; wayqu=0; riverwayqu=0; landwayqu=0; regwaylength=0; riverwaylength=0; landwaylength=0; regwayqu=0; }
};

void statinfot::print()
{
  printf("Create regional map time : %.0f\n",createregtime);
  printf("\n");
  printf("Create ways time : %.0f\n",createwaytime);
  printf("Ways quantity : %"PRId64"\n",wayqu);
  printf("Total way length : %"PRId64"\n",waylength);
  printf("\n");
  printf("Create reg ways time : %.0f\n",createregwaytime);
  printf("Reg ways quantity : %"PRId64"\n",regwayqu);
  printf("Total reg way length : %"PRId64"\n",regwaylength);
  printf("\n");
  printf("Create river ways time : %.0f\n",createriverwaytime);
  printf("River ways quantity : %"PRId64"\n",riverwayqu);
  printf("Total river way length : %"PRId64"\n",riverwaylength);
  printf("Create land ways time : %.0f\n",createlandwaytime);
  printf("Land ways quantity : %"PRId64"\n",landwayqu);
  printf("Total land way length : %"PRId64"\n",landwaylength);
}


void createrandommap(i32 mapsizex, i32 mapsizey, rnumt density)
{
  bytept mapp;
  i32 x,y;

  way.initmap(mapsizex,mapsizey);
  regmng.initmap(mapsizex,mapsizey);

  mapp=regmng.landscapemapp;

  for (y=0; y<mapsizey; y++)
    for (x=0; x<mapsizex; x++)
    {
      if (myrandom((float)0,density)<=1.0f)
        mapp[x+y*mapsizex]=0;
      else
      {
        mapp[x+y*mapsizex]=1;

        //if ((x>0)&&(y>0)&&(x<mapsizex-1)&&(y<mapsizey-1))
          way.addpoint(x,y);
      }
    }
}

int main(int argc, char* argv[])
{
  workinfot info;
  statinfot stat;
  FILE* f;
  time_t t1,t2;
  int i;

#if defined(SPEC_CPU)
  t1 = t2 = 0;
#endif /* SPEC_CPU */
  
  printf("Small Path Finding Library\n");
  printf("Read configuration file\n");

  if (argc!=2)
  {
    printf("Cannot read configuration file name\n");
    return 1;
  }

  f=fopen(argv[1],"r");
  if (!f)
  {
    printf("Cannot read configuration file\n");
    return 1;
  }

  fscanf(f,"%s",info.mapfilename);
  fscanf(f,"%d",&info.regionsize);
  fscanf(f,"%d",&info.wayqu);
  fscanf(f,"%d",&info.riverwayqu);
  fscanf(f,"%d",&info.landwayqu);
  fscanf(f,"%d",&info.regwayqu);
  fscanf(f,"%d",&info.randommaplx);
  fscanf(f,"%d",&info.randommaply);
  fscanf(f,"%f",&info.randommapdensity);
  fscanf(f,"%d",&info.randommapregionsize);
  fscanf(f,"%d",&info.randommapwayqu);
  fscanf(f,"%d",&info.randommapregwayqu);

  fclose(f);

 
  printf("Create ways\n");
  printf("%s\n",info.mapfilename);

  way.create();
  regmng.create();
  regway.create(&regmng);

  way.loadmap(info.mapfilename);
  regmng.loadmap(info.mapfilename);

  stat.init();

#if !defined(SPEC_CPU)
  t1=time(nil);
#endif /* SPEC_CPU */
  regmng.createregions(info.regionsize);

#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createregtime=difftime(t2,t1);
#else
  stat.createregtime=0;
#endif /* !SPEC_CPU */


  t1=time(nil);
  for (i=0; i<info.wayqu; i++)
  {
    i32 startx,starty;
    i32 endx,endy;
    point16pt wayar;
    i32 waylength;
    bool flcreate;

    
    flcreate=false;
    waylength=0;
    wayar=nil;

    startx=myrandom(1,regmng.mapmaxx);
    starty=myrandom(1,regmng.mapmaxy);
    if (way.findfreepoint(startx,starty,startx,starty))
    {
      endx=myrandom(1,regmng.mapmaxx);
      endy=myrandom(1,regmng.mapmaxy);

      if (way.findfreepoint(endx,endy,endx,endy))
        flcreate=way.createway(startx,starty,endx,endy,wayar,waylength);
   
#if defined(SPEC_CPU)
      // jray: get rid of the FREE_NULL insure msgs
      if (wayar) free(wayar); 
#else
      free(wayar);
#endif
    }

    if (flcreate)
    {
      stat.waylength+=waylength;
      stat.wayqu++;
    }
  }

#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createwaytime=difftime(t2,t1);
#else
  stat.createwaytime=0;
#endif /* !SPEC_CPU */


  t1=time(nil);
  for (i=0; i<info.regwayqu; i++)
  {
    i32 reg1num,reg2num;
    regobjpt reg1p,reg2p;
    regobjppt wayar;
    i32 waylength;
    bool flcreate;
    
    reg1num=random1(regmng.rarp.elemqu-1);
    reg2num=random1(regmng.rarp.elemqu-1);

    reg1p=regmng.rarp[reg1num];
    if (reg1p->nb1ar.elemqu==0)
      continue;
    reg2p=regmng.rarp[reg2num];
    if (reg2p->nb1ar.elemqu==0)
      continue;

    wayar=nil;
    waylength=0;

    flcreate=regway.createway(reg1p,reg2p,wayar,waylength);
#if defined(SPEC_CPU)
      // jray: get rid of the FREE_NULL insure msgs
      if (wayar) free(wayar); 
#else
      free(wayar);
#endif

    if (flcreate)
    {
      stat.regwaylength+=waylength;
      stat.regwayqu++;
    }
  }

#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createregwaytime=difftime(t2,t1);
#else
  stat.createregwaytime=0;
#endif /* !SPEC_CPU */


  regway.destroy();
  regmng.destroy();
  way.destroy();


  way2.create();
  way2.loadmap(info.mapfilename);

#if !defined(SPEC_CPU)
  t1=time(nil);
#endif /* !SPEC_CPU */
  for (i=0; i<info.riverwayqu; i++)
  {
    i32 startx,starty;
    i32 endx,endy;
    pointpt wayar;
    i32 waylength;
    bool flcreate;
    byte movetimear[way2obj::maxmovetact+1];
    i32 j;

    
    for (j=0; j<way2obj::maxmovetact+1; j++)
      movetimear[j]=j;

    movetimear[0]=255;
    movetimear[1]=1;
    movetimear[2]=255;

    flcreate=false;
    waylength=0;
    wayar=nil;

    startx=irandom(1,way2.mapsizex-1);
    starty=irandom(1,way2.mapsizey-1);
    if (movetimear[way2.getterrain(startx,starty)]>0)
    {
      endx=irandom(1,way2.mapsizex-1);
      endy=irandom(1,way2.mapsizey-1);

      if (movetimear[way2.getterrain(startx,starty)]>0)
        flcreate=way2.createway(startx,starty,endx,endy,movetimear,wayar,waylength);
    
      free(wayar);
    }

    if (flcreate)
    {
      stat.riverwaylength+=waylength;
      stat.riverwayqu++;
    }
  }
#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createriverwaytime=difftime(t2,t1);
#else
  stat.createriverwaytime=0;
#endif /* !SPEC_CPU */


  t1=time(nil);
  for (i=0; i<info.landwayqu; i++)
  {
    i32 startx,starty;
    i32 endx,endy;
    pointpt wayar;
    i32 waylength;
    bool flcreate;
    byte movetimear[way2obj::maxmovetact+1];
    i32 j;

    
    for (j=0; j<way2obj::maxmovetact+1; j++)
      movetimear[j]=j;

    movetimear[0]=1;
    movetimear[1]=255;
    movetimear[2]=255;

    flcreate=false;
    waylength=0;
    wayar=nil;

    startx=irandom(1,way2.mapsizex-2);
    starty=irandom(1,way2.mapsizey-2);
    if (movetimear[way2.getterrain(startx,starty)]>0)
    {
      endx=irandom(1,way2.mapsizex-2);
      endy=irandom(1,way2.mapsizey-2);

      if (movetimear[way2.getterrain(startx,starty)]>0)
        flcreate=way2.createway(startx,starty,endx,endy,movetimear,wayar,waylength);
    
      free(wayar);
    }

    if (flcreate)
    {
      stat.landwaylength+=waylength;
      stat.landwayqu++;
    }
  }

#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createlandwaytime=difftime(t2,t1);
#else
  stat.createlandwaytime=0;
#endif /* !SPEC_CPU */
  

  
  way2.destroy();



  stat.print();
  printf("\n");



  printf("Create ways\n");
  printf("Random map\n");

  way.create();
  regmng.create();
  regway.create(&regmng);

  createrandommap(info.randommaplx,info.randommaply,info.randommapdensity);

  stat.init();

#if !defined(SPEC_CPU)
  t1=time(nil);
#endif /* !SPEC_CPU */
  regmng.createregions(info.randommapregionsize);
#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createregtime=difftime(t2,t1);
#else
  stat.createregtime=0;
#endif /* !SPEC_CPU */


  t1=time(nil);
  for (i=0; i<info.randommapwayqu; i++)
  {
    i32 startx,starty;
    i32 endx,endy;
    point16pt wayar;
    i32 waylength;
    bool flcreate;

    
    flcreate=false;
    waylength=0;
    wayar=nil;

    startx=myrandom(1,regmng.mapmaxx);
    starty=myrandom(1,regmng.mapmaxy);
    if (way.findfreepoint(startx,starty,startx,starty))
    {
      endx=myrandom(1,regmng.mapmaxx);
      endy=myrandom(1,regmng.mapmaxy);

      if (way.findfreepoint(endx,endy,endx,endy))
        flcreate=way.createway(startx,starty,endx,endy,wayar,waylength);
    
#if defined(SPEC_CPU)
      // jray: get rid of the FREE_NULL insure msgs
      if (wayar) free(wayar); 
#else
      free(wayar);
#endif
    }

    if (flcreate)
    {
      stat.waylength+=waylength;
      stat.wayqu++;
    }
  }

#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createwaytime=difftime(t2,t1);
#else
  stat.createwaytime=0;
#endif /* !SPEC_CPU */

#if !defined(SPEC_CPU)
  t1=time(nil);
#endif /* !SPEC_CPU */

  for (i=0; i<info.randommapregwayqu; i++)
  {
    i32 reg1num,reg2num;
    regobjpt reg1p,reg2p;
    regobjppt wayar;
    i32 waylength;
    bool flcreate;
    
    reg1num=random1(regmng.rarp.elemqu-1);
    reg2num=random1(regmng.rarp.elemqu-1);

    reg1p=regmng.rarp[reg1num];
    if (reg1p->nb1ar.elemqu==0)
      continue;
    reg2p=regmng.rarp[reg2num];
    if (reg2p->nb1ar.elemqu==0)
      continue;

    wayar=nil;
    waylength=0;

    flcreate=regway.createway(reg1p,reg2p,wayar,waylength);
#if defined(SPEC_CPU)
      // jray: get rid of the FREE_NULL insure msgs
      if (wayar) free(wayar); 
#else
      free(wayar);
#endif

    if (flcreate)
    {
      stat.regwaylength+=waylength;
      stat.regwayqu++;
    }
  }

#if !defined(SPEC_CPU)
  t2=time(nil);
  stat.createregwaytime=difftime(t2,t1);
#else
  stat.createregwaytime=0;
#endif /* !SPEC_CPU */


  regway.destroy();
  regmng.destroy();
  way.destroy();

  stat.print();
  printf("\n");

  return 0;
}
