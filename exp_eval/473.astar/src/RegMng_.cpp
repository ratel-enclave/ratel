

#include <memory.h>
#include <stdlib.h>

#if defined(SPEC_CPU_WINDOWS)
#include <io.h>
#endif /* SPEC_CPU_WINDOWS */

#if !defined(SPEC_CPU_WINDOWS)
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#endif /* !SPEC_CPU_WINDOWS */

#include <fcntl.h>
#include <stdio.h>
#include "RegMng_.h"
#include "Random.h"


void regmngobj::create()
{
  rarp.create(16);
  regionmapp=nil;
  landscapemapp=nil;
  mmapp=nil;

  regfillnum=0;
}

void regmngobj::destroy()
{
  i32 i;

  for (i=0; i<rarp.elemqu; i++)
  {
    rarp[i]->destroy();
    delete rarp[i];
  }
  rarp.destroy();

  free(regionmapp);
  regionmapp=nil;
  free(landscapemapp);
  landscapemapp=nil;
  free(mmapp);
  mmapp=nil;
}

bool regmngobj::loadmap(const char* fn)
{
  int hf;
  i32 i;

#if !defined(SPEC_CPU_WINDOWS)
  hf=open(fn,O_RDONLY);
#else
  hf=open(fn,O_RDONLY|O_BINARY);
#endif /* !SPEC_CPU_WINDOWS */

  if (hf==-1)
    return false;

#if defined(SPEC_CPU)
  read(hf,&xRunion.xRstruc.xR1,sizeof(xRunion.xRstruc.xR1));
  read(hf,&xRunion.xRstruc.xR2,sizeof(xRunion.xRstruc.xR2));
  read(hf,&xRunion.xRstruc.xR3,sizeof(xRunion.xRstruc.xR3));
  read(hf,&xRunion.xRstruc.xR4,sizeof(xRunion.xRstruc.xR4));
  read(hf,&yRunion.yRstruc.yR1,sizeof(yRunion.yRstruc.yR1));
  read(hf,&yRunion.yRstruc.yR2,sizeof(yRunion.yRstruc.yR2));
  read(hf,&yRunion.yRstruc.yR3,sizeof(yRunion.yRstruc.yR3));
  read(hf,&yRunion.yRstruc.yR4,sizeof(yRunion.yRstruc.yR4));
  mapsizex = xRunion.xRmapsizex;
  mapsizey = yRunion.yRmapsizey;
#else
  read(hf,&mapsizex,sizeof(mapsizex));
  read(hf,&mapsizey,sizeof(mapsizey));
#endif /* SPEC_CPU */

  mapmaxx=mapsizex-1;
  mapmaxy=mapsizey-1;

  regionmapp=(regobjppt)malloc(mapsizex*mapsizey*sizeof(regionmapp[0]));
  landscapemapp=(bytept)malloc(mapsizex*mapsizey*sizeof(landscapemapp[0]));
  mmapp=(w16pt)malloc(mapsizex*mapsizey*sizeof(mmapp[0]));
  memset(mmapp,0,mapsizex*mapsizey*sizeof(mmapp[0]));
  fillnum=0;

  read(hf,landscapemapp,mapsizex*mapsizey*sizeof(landscapemapp[0]));

  for (i=0; i<256; i++)
    flpasablear[i]=false;
  flpasablear[0]=true;

  close(hf);

  return true;
}

bool regmngobj::initmap(i32 mapsizexin, i32 mapsizeyin)
{
  i32 i;

  mapsizex=mapsizexin;
  mapsizey=mapsizeyin;

  mapmaxx=mapsizex-1;
  mapmaxy=mapsizey-1;

  regionmapp=(regobjppt)malloc(mapsizex*mapsizey*sizeof(regionmapp[0]));
  landscapemapp=(bytept)malloc(mapsizex*mapsizey*sizeof(landscapemapp[0]));
  mmapp=(w16pt)malloc(mapsizex*mapsizey*sizeof(mmapp[0]));
  memset(mmapp,0,mapsizex*mapsizey*sizeof(mmapp[0]));
  fillnum=0;

  for (i=0; i<256; i++)
    flpasablear[i]=false;
  flpasablear[0]=true;

  return true;
}

//======================================================
//========================================================

void regmngobj::foundemptyregions()
{
  i32 i;

  for (i=0; i<rarp.elemqu; i++)
    if (rarp[i]->square==0)
      rarp[i]->flexist=false;
}

regobjpt regmngobj::newregion(i32 x0, i32 y0)
{
  regobjpt regionp;

  regionp=new regobj(this);
  regionp->internalnum=rarp.add(regionp);
  regionp->create(x0,y0);

  return regionp;
}

void regmngobj::deleteregions()
{
  flexarray <regobjpt> deletedregions;
  i32 i;

  deletedregions.create(16);
  for (i=0; i<rarp.elemqu; i++)
    if (rarp[i]->flexist==false)
      deletedregions.add(rarp[i]);

  for (i=0; i<deletedregions.elemqu; i++)
  {
    rarp.remove(deletedregions[i]->internalnum);
    deletedregions[i]->destroy();
    delete deletedregions[i];
  }
  deletedregions.destroy();
}

//========================================================
//=======================================================}

void regmngobj::defineregions()
{
  i32 i;
  i32 x,y,xx,yy;
  flexarray <regboundobj> rboundarp;
  i32 regionx,regiony;
  bool fldone;
  i32 i1,i2;
  i32 reglx,regly;
  regobjpt regionp;
  regboundobjpt regboundp;


  rboundarp.create(16);

#if defined(SPEC_CPU)
  regionx=myround((mapmaxx/620.0f)*34.0f/radiuscoef);
  regiony=myround((mapmaxy/309.0f)*20.0f/radiuscoef);

  reglx=myround((mapmaxx+1)/(rnumt)regionx);
  regly=myround((mapmaxy+1)/(rnumt)regiony*sqrt(3.0f)/2.0f);
#else
  regionx=round((mapmaxx/620.0f)*34.0f/radiuscoef);
  regiony=round((mapmaxy/309.0f)*20.0f/radiuscoef);

  reglx=round((mapmaxx+1)/(rnumt)regionx);
  regly=round((mapmaxy+1)/(rnumt)regiony*sqrt(3.0f)/2.0f);
#endif

  i1=0;
  i2=0;

  do
  {
    if (i2&1)
      xx=reglx+i1*reglx;
    else
      xx=(reglx / 2)+i1*reglx;

    yy=(regly / 2)+i2*regly;

    if (findfreeplace(xx,yy,x,y)==false)
      goto next;
    else
      if (regmapp(x,y))
        goto next;


    regionp=new regobj(this);
    regionp->internalnum=rarp.add(regionp);
    regionp->create();
    regionp->flexist=true;
    regionp->centerp.x=x;
    regionp->centerp.y=y;

    regboundp=rboundarp.add();
    regboundp->flexist=true;
    regboundp->firststep(x,y,regionp,this);

next:

    i1=i1+1;

    if (i2&1)
    {
      if (i1==regionx-1)
      {
        i1=0;
        i2=i2+1;
      }
    }
    else
    {
      if (i1==regionx)
      {
        i1=0;
        i2=i2+1;
      }
    }
  }
#if defined(SPEC_CPU)
  while (i2<myround(regiony*2.0f/sqrt(3.0f))+3);
#else
  while (i2<round(regiony*2.0f/sqrt(3.0f))+3);
#endif

  do
  {
    fldone=true;

    for (i=0; i<rboundarp.elemqu; i++)
      if (rboundarp[i].step()==true)
        fldone=false;

  }
  while (fldone==false);


  for (i=0; i<rboundarp.elemqu; i++)
    rboundarp[i].destroy();
  rboundarp.destroy();
}

//=======================================================
//=======================================================

void regmngobj::addallregions()
{
  i32 x,y;

  for (y=0; y<=mapmaxy; y++)
    for (x=0; x<=mapmaxx; x++)
      if (regmapp(x,y)==nil)
        if (flpasablear[mapp(x,y)])
          newregion(x,y);
}

void regmngobj::addregions()
{
  i32 x,y,i;

  for (i=1; i<2; i++)
    for (y=0; y<=mapmaxy; y++)
      for (x=0; x<=mapmaxx; x++)
        if (regmapp(x,y)==nil)
          if (flpasablear[mapp(x,y)])
            if (random1(32)==1)
              newregion(x,y);

  addallregions();
}

//======================================================
//======================================================

void regmngobj::redefineregions()
{
  i32 i;
  flexarray <regboundobj> rboundarp;
  bool fldone;
  regboundobjpt regboundp;

  rboundarp.create(16);

  for (i=0; i<rarp.elemqu; i++)
    if (rarp[i]->flredefine)
    {
      regboundp=rboundarp.add();
      regboundp->flexist=true;
      regboundp->firststep(rarp[i]->centerp.x,rarp[i]->centerp.y,rarp[i],this);
    }

  do
  {
    fldone=true;

    for (i=0; i<rboundarp.elemqu; i++)
      if (rboundarp[i].step()==true)
        fldone=false;
  }
  while (fldone==false);

  for (i=0; i<rboundarp.elemqu; i++)
    rboundarp[i].destroy();
  rboundarp.destroy();
}

//======================================================
//=====================================================

void regmngobj::enlargeregions()
{
  i32 i;
  i32 critical;

  critical=(i32)(107.0*radiuscoef*radiuscoef);

  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->flredefine=true;

  for (i=0; i<rarp.elemqu; i++)
    if (rarp[i]->square<critical)
    {
      rarp[i]->flredefine=false;
      rarp[i]->flexist=false;
    }

  deleteregions();

  memset(regionmapp,0,mapsizex*mapsizey*sizeof(regionmapp[0]));

  redefineregions();
}

//======================================================

void regmngobj::enlargeneighborses(i32 critical)
{
  i32 i,i2;
  i32 x,y;
  regobjpt regionp;


  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->flredefine=false;


  for (i=0; i<rarp.elemqu; i++)
    if (rarp[i]->square<critical)
    {
      rarp[i]->flexist=false;

      for (i2=0; i2<rarp[i]->nb1ar.elemqu; i2++)
        rarp[i]->nb1ar[i2]->flredefine=true;
    }


  for (i=0; i<rarp.elemqu; i++)
    if (rarp[i]->flredefine)
      if (rarp[i]->flexist==false)
        rarp[i]->flredefine=false;


  for (y=0; y<=mapmaxy; y++)
    for (x=0; x<=mapmaxx; x++)
    {
      regionp=regmapp(x,y);

      if (regionp)
        if ((regionp->flredefine)||(regionp->flexist==false))
          regmapp(x,y)=nil;
    }

  deleteregions();

  redefineregions();
}

//=====================================================
//=====================================================

void regmngobj::createregions(i32 regionl)
{
  i32 i,x,y;


  memset(regionmapp,0,mapsizex*mapsizey*sizeof(regionmapp[0]));

  if (regionl<6)
    regionl=6;
  if (regionl>mapsizex/5)
    regionl=mapsizex/5;

  radiuscoef=((rnumt)(regionl))/20.0f;

  regionradius=(i32)(10.0f*radiuscoef);
  regionradius2=regionradius*regionradius;
  defineregions();


  enlargeregions();


  regionradius=(i32)(19*radiuscoef);
  regionradius2=regionradius*regionradius;
  addregions();


  regionradius=5*mapmaxx;
  regionradius2=regionradius*regionradius;
  defineneighborhood1();
  enlargeneighborses((i32)(75.0f*radiuscoef*radiuscoef));


  defineneighborhood1();
  enlargeneighborses((i32)(75.0*radiuscoef*radiuscoef));

  addallregions();

  deleteregions();

  for (y=0; y<mapmaxy; y++)
    for (x=0; x<mapmaxx; x++)
      if (regmapp(x,y)==nil)
        if (flpasablear[mapp(x,y)])
          printf("Error in createregions");

  defineneighborhood1();


  definemiddleregpoint();
  normalizemiddlepoint();


  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->flredefine=true;
  memset(regionmapp,0,mapsizex*mapsizey*sizeof(regionmapp[0]));
  redefineregions();
  foundemptyregions();
  deleteregions();
  addallregions();
  defineneighborhood1();
  definemiddleregpoint();
  normalizemiddlepoint();


  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->fillnum=regfillnum;
}


i32 regmngobj::getregfillnum()
{
  i32 i;

  regfillnum++;

  if (regfillnum==1024*1024*1024)
    regfillnum=1;

  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->fillnum=0;

  return regfillnum;  
}

//=============================================================
//==============================================================

void regmngobj::defineneighborhood1()
{
  i32 x,y,x1,y1;
  i32 i;
  regobjpt regionp,region2p;
  bool flinclude;

  /*
  regionqu=rarp.elemqu;

  relregarp=(bool*)malloc(regionqu*regionqu*sizeof(relregarp[0]));
  memset(relregarp,0,regionqu*regionqu*sizeof(relregarp[0]));

  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->index=i;

  for (y=1; y<=mapmaxy-1; y++)
    for (x=1; x<=mapmaxx-1; x++)
    {
      regionp=regmapp(x,y);

      if (!regionp)
        continue;

      for (y1=y-1; y1<=y+1; y1++)
        for (x1=x-1; x1<=x+1; x1++)
        {
          region2p=regmapp(x1,y1);
          if (region2p)
            if (regionp!=region2p)
            {
              relregarp[regionp->index+region2p->index*regionqu]=true;
              relregarp[region2p->index+regionp->index*regionqu]=true;
            }
        }
    }

  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->nb1ar.clear();

  for (i=0; i<regionqu; i++)
  {
    for (j=i+1; j<regionqu; j++)
    {
      if (relregarp[i+j*regionqu])
      {
        rarp[i]->nb1ar.add(rarp[j]);
        rarp[j]->nb1ar.add(rarp[i]);
      }
    }
  }

  free(relregarp);
  */

  for (i=0; i<rarp.elemqu; i++)
   rarp[i]->index=i;

  for (i=0; i<rarp.elemqu; i++)
    rarp[i]->nb1ar.clear();


  for (y=1; y<=mapmaxy-1; y++)
    for (x=1; x<=mapmaxx-1; x++)
    {
      regionp=regmapp(x,y);

      if (!regionp)
        continue;

      for (y1=y-1; y1<=y+1; y1++)
        for (x1=x-1; x1<=x+1; x1++)
        {
          region2p=regmapp(x1,y1);
          if (region2p)
            if (regionp!=region2p)
            {
              flinclude=false;
              for (i=0; i<regionp->nb1ar.elemqu; i++)
                if (regionp->nb1ar[i]==region2p)
                {
                  flinclude=true;
                  break;
                }
              if (flinclude)
                continue;

              regionp->nb1ar.add(region2p);
              region2p->nb1ar.add(regionp);
             }
        }
    }
}

//=======================================================
//========================================================

void regmngobj::definemiddleregpoint()
{
  i32 x,y,i;
  regobjpt regionp;

  for (i=0; i<rarp.elemqu; i++)
  {
    rarp[i]->centerp.x=0;
    rarp[i]->centerp.y=0;
  }

  for (y=0; y<=mapmaxy; y++)
    for (x=0; x<=mapmaxx; x++)
    {
       regionp=regmapp(x,y);
       if (regionp)
       {
         regionp->centerp.x+=x;
         regionp->centerp.y+=y;
       }
     }

   for (i=0; i<rarp.elemqu; i++)
   {
     regionp=rarp[i];

     if (regionp->square>0)
     {
#if defined(SPEC_CPU)
       regionp->centerp.x=myround((double)regionp->centerp.x/(double)regionp->square);
       regionp->centerp.y=myround((double)regionp->centerp.y/(double)regionp->square);
#else
       regionp->centerp.x=round((double)regionp->centerp.x/(double)regionp->square);
       regionp->centerp.y=round((double)regionp->centerp.y/(double)regionp->square);
#endif
     }
   }
}

//======================================================

void regmngobj::normalizemiddlepoint()
{
  regobjpt regionp;
  i32 i,x,y;

  for (i=0; i<rarp.elemqu; i++)
  {
    regionp=rarp[i];

    if (findfreeplace(regionp->centerp.x,regionp->centerp.y,x,y))
    {
      regionp->centerp.x=x;
      regionp->centerp.y=y;
    }
  }
}


