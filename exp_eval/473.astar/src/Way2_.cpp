

#include <stdlib.h>
#include <memory.h>

#if defined(SPEC_CPU_WINDOWS)
#include <io.h>
#endif /* SPEC_CPU_WINDOWS */

#if !defined(SPEC_CPU_WINDOWS)
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#endif /* !SPEC_CPU_WINDOWS */

#include <fcntl.h>
#include "Way2_.h"


bool way2obj::isaddtobound(i32 x, i32 y)
{
  if (movetime(x,y)==0)
    return false;
  else
    return true;
}

void way2obj::addtobound(i32 x, i32 y)
{
  i32 boundnum;

  boundnum=((filltact+movetime(x,y)) % (maxmovetact+1));

  boundar[boundnum].add(pointt(x,y));
}

void way2obj::releasepoint(i32 px, i32 py)
{
  i32 x,y;
  i32 x1,y1,x2,y2;
  i32 mindist,dist;
  bool flcenter;


  if (waymap[px+py*mapsizex].fillnum==fillnum)
    return;

  waymap[px+py*mapsizex].fillnum=fillnum;

  x1=px-1;
  y1=py-1;
  x2=px+1;
  y2=py+1;

  if (x1<0) x1=0;
  if (y1<0) y1=0;
  if (x2>mapmaxx) x2=mapmaxx;
  if (y2>mapmaxy) y2=mapmaxy;

  mindist=10000000;

  flcenter=true;

  for (y=y1; y<=y2; y++)
    for (x=x1; x<=x2; x++)
      if ((x!=px)||(y!=py))
        if (waymap[x+y*mapsizex].fillnum==fillnum)
        {
          dist=waymap[x+y*mapsizex].num;

          if (dist<mindist)
          {
            mindist=dist;
            flcenter=false;
          }
        }
        else
          if (isaddtobound(x,y))
            addtobound(x,y);

   if (flcenter==false)
     waymap[px+py*mapsizex].num=mindist+movetime(px,py);
   else
     waymap[px+py*mapsizex].num=movetime(px,py);

   if ((px==endx)&&(py==endy))
     flend=true;
}

void way2obj::releasebound()
{
  i32 i;

  if (boundar[curbound].elemqu==0)
    nonboundqu=nonboundqu+1;
  else
  {
    nonboundqu=0;

    for (i=boundar[curbound].elemqu-1; i>=0; i--)
      releasepoint(boundar[curbound][i].x,boundar[curbound][i].y);

    boundar[curbound].clear();
  }
}


bool way2obj::fill(i32 startx, i32 starty)
{
  i32 i;

  for (i=0; i<maxmovetact+1; i++)
    boundar[i].clear();

  fillnum++;
  if (fillnum==65535)
  {
    memset(waymap,0,mapsizex*mapsizey*sizeof(waymap[0]));
    fillnum=1;
  }

  flend=false;

  nonboundqu=0;

  boundar[0].add(pointt(startx,starty));
  waymap[startx+starty*mapsizex].num=0;
  curbound=0;
  filltact=0;

  while ((flend==false)&&(nonboundqu<(maxmovetact+10)))
  {
    curbound=filltact%(maxmovetact+1);

    releasebound();

    filltact++;
  }

  return flend;
}


bool way2obj::createwayar(pointpt& wayarp, i32& waylength)
{
  i32 x1,y1,x2,y2;
  i32 mx=0,my=0;
  i32 x,y;
  i32 i;
  i32 mind;
  boundart wayar;
  bool flfinish;
  i32 minpdist,curpdist;
  i32 index;


  flfinish=false;

  wayar.create(mapsizex);

  wayar.add(pointt(endx,endy));
  waylength=1;

  index=0;

  while ((flfinish==false)&&(index<mapsizex*mapsizey))
  {
    x1=wayar[waylength-1].x-1;
    y1=wayar[waylength-1].y-1;
    x2=wayar[waylength-1].x+1;
    y2=wayar[waylength-1].y+1;

    if (x1<0) x1=0;
    if (y1<0) y1=0;
    if (x2>mapmaxx) x2=mapmaxx;
    if (y2>mapmaxy) y2=mapmaxy;

    mind=100000000;

    for (y=y1; y<=y2; y++)
      for (x=x1; x<=x2; x++)
        if (waymap[x+y*mapsizex].fillnum==fillnum)
          if (waymap[x+y*mapsizex].num<mind)
          {
            mx=x;
            my=y;
            mind=waymap[x+y*mapsizex].num;
          }
          else
            if (waymap[x+y*mapsizex].num==mind)
            {
              minpdist=sqr(startx-mx)+sqr(starty-my);
              curpdist=sqr(startx-x)+sqr(starty-y);

              if (curpdist<minpdist)
              {
                mx=x;
                my=y;
              }
            }

    waylength++;
    index++;

    wayar.add(pointt(mx,my));

    if ((mx==startx)&&(my==starty))
      flfinish=true;
  }

  if (flfinish==false)
  {
    wayar.destroy();
    wayarp=nil;
    waylength=0;
    return false;
  }

  wayarp=(pointpt)malloc(wayar.elemqu*sizeof(wayarp[0]));

  for (i=wayar.elemqu-1; i>=0; i--)
    wayarp[wayar.elemqu-1-i]=wayar[i];
  wayar.destroy();

  return true;
}

//======================================================

bool way2obj::createway(i32 startx, i32 starty, i32 endx, i32 endy, bytept movetimearp, pointpt& wayar, i32& waylength)
{
  i32 i;

  way2obj::startx=startx;
  way2obj::starty=starty;
  way2obj::endx=endx;
  way2obj::endy=endy;

  for (i=0; i<maxmovetact+1; i++)
    movetimear[i]=movetimearp[i];

  if ((startx==endx)&&(starty==endy))
  {
    wayar=(pointpt)malloc(1*sizeof(wayar[0]));
    waylength=0;
    return true;
  }

  if (!fill(startx,starty))
  {
    wayar=nil;
    waylength=0;
    return false;
  }

  if (!createwayar(wayar,waylength))
  {
    wayar=nil;
    waylength=0;
    return false;
  }

  return true;
}

//======================================================
//===================================================

bool way2obj::loadmap(const char* fn)
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

  for (i=0; i<maxmovetact+1; i++)
    boundar[i].create(128);

  mapmaxx=mapsizex-1;
  mapmaxy=mapsizey-1;

  waymap=(waymapcellpt)malloc(mapsizex*mapsizey*sizeof(waymap[0]));
  memset(waymap,0,mapsizex*mapsizey*sizeof(waymap[0]));
  fillnum=0;

  mapp=(bytept)malloc(mapsizex*mapsizey*sizeof(mapp[0]));

  read(hf,mapp,mapsizex*mapsizey*sizeof(mapp[0]));

  close(hf);

  return true;
}

bool way2obj::initmap(i32 mapsizexin, i32 mapsizeyin)
{
  i32 i;

  mapsizex=mapsizexin;
  mapsizey=mapsizeyin;

  for (i=0; i<maxmovetact+1; i++)
    boundar[i].create(128);

  mapmaxx=mapsizex-1;
  mapmaxy=mapsizey-1;

  waymap=(waymapcellpt)malloc(mapsizex*mapsizey*sizeof(waymap[0]));
  memset(waymap,0,mapsizex*mapsizey*sizeof(waymap[0]));
  fillnum=0;

  mapp=(bytept)malloc(mapsizex*mapsizey*sizeof(mapp[0]));

  return true;
}

void way2obj::create()
{
  waymap=nil;
  mapp=nil;
}

void way2obj::destroy()
{
  i32 i;

  for (i=0; i<maxmovetact+1; i++)
    boundar[i].destroy();

  free(mapp);
  free(waymap);
}

