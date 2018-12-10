

#if defined(SPEC_CPU_WINDOWS)
#include <io.h>
#endif /* SPEC_CPU_WINDOWS */

#if !defined(SPEC_CPU_WINDOWS)
#include <errno.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#endif /* !SPEC_CPU_WINDOWS */

#include <fcntl.h>
#include <memory.h>
#include <stdlib.h>
#include "Way_.h"


void wayobj::addsphere(const rvectort& centerp, rnumt radius)
{
  i32 x1,y1,x2,y2;
  rnumt rx,ry;
  rnumt d2;
  rnumt radius2;
  rnumt rr;
  i32 x,y;


  if (centerp.y>=info.height2)
  {
    d2=radius*radius-sqr(centerp.y-info.height2);
    if (d2<=0.0f)
      return;
    radius=sqrt(d2);
  }
  else
    if (centerp.y<=info.height1)
    {
      d2=radius*radius-sqr(info.height1-centerp.y);
      if (d2<=0.0f)
        return;
      radius=sqrt(d2);
    }


  //xx1=centerp.x*xcoef1+xcoef2;
  //yy1=centerp.z*ycoef1+ycoef2;
  //xx=(i32)xx1;
  //yy=(i32)yy1;
  x1=(i32)((centerp.x-radius-cellr)*xcoef1+xcoef2);
  y1=(i32)((centerp.z-radius-cellr)*ycoef1+ycoef2);
  x2=(i32)((centerp.x+radius+cellr)*xcoef1+xcoef2);
  y2=(i32)((centerp.z+radius+cellr)*ycoef1+ycoef2);


  if (x1>mapmaxx1) return;
  if (y1>mapmaxy1) return;
  if (x2<1) return;
  if (y2<1) return;

  if (x1<1) x1=1;
  if (y1<1) y1=1;
  if (x2>mapmaxx1) x2=mapmaxx1;
  if (y2>mapmaxy1) y2=mapmaxy1;

  radius2=sqr(radius+cellr);

  for (y=y1; y<=y2; y++)
    for (x=x1; x<=x2; x++)
    {
      rx=info.minx+cellr+((rnumt)x)*(info.maxx-info.minx)/maplx;
      ry=info.miny+cellr+((rnumt)y)*(info.maxy-info.miny)/maply;

      rr=sqr(centerp.x-rx)+sqr(centerp.z-ry);

      if (rr<radius2)
        maparp[y<<shift|x]++;
    }
}

void wayobj::removesphere(const rvectort& centerp, rnumt radius)
{
  i32 x1,y1,x2,y2;
  rnumt rx,ry;
  rnumt d2;
  rnumt radius2;
  rnumt rr;
  i32 x,y;


  if (centerp.y>=info.height2)
  {
    d2=radius*radius-sqr(centerp.y-info.height2);
    if (d2<=0.0f)
      return;
    radius=sqrt(d2);
  }
  else
    if (centerp.y<=info.height1)
    {
      d2=radius*radius-sqr(info.height1-centerp.y);
      if (d2<=0.0f)
        return;
      radius=sqrt(d2);
    }


  //xx1=centerp.x*xcoef1+xcoef2;
  //yy1=centerp.z*ycoef1+ycoef2;
  //xx=(i32)xx1;
  //yy=(i32)yy1;
  x1=(i32)((centerp.x-radius-cellr)*xcoef1+xcoef2);
  y1=(i32)((centerp.z-radius-cellr)*ycoef1+ycoef2);
  x2=(i32)((centerp.x+radius+cellr)*xcoef1+xcoef2);
  y2=(i32)((centerp.z+radius+cellr)*ycoef1+ycoef2);


  if (x1>mapmaxx1) return;
  if (y1>mapmaxy1) return;
  if (x2<1) return;
  if (y2<1) return;

  if (x1<1) x1=1;
  if (y1<1) y1=1;
  if (x2>mapmaxx1) x2=mapmaxx1;
  if (y2>mapmaxy1) y2=mapmaxy1;

  radius2=sqr(radius+cellr);

  for (y=y1; y<=y2; y++)
    for (x=x1; x<=x2; x++)
    {
      rx=info.minx+cellr+((rnumt)x)*(info.maxx-info.minx)/maplx;
      ry=info.miny+cellr+((rnumt)y)*(info.maxy-info.miny)/maply;

      rr=sqr(centerp.x-rx)+sqr(centerp.z-ry);

      if (rr>radius2) continue;

      maparp[y<<shift|x]--;
    }
}

void wayobj::addpoint(i32 x, i32 y)
{
  if (maparp[y<<shift|x]>=0)
    maparp[y<<shift|x]++;
}

void wayobj::removepoint(i32 x, i32 y)
{
  if (maparp[y<<shift|x]>=0)
    maparp[y<<shift|x]--;
}

//=====================================================================
//=====================================================================

void wayobj::clear()
{
  i32 size;
  i32 x,y;

  size=(1<<mapxshift)<<mapyshift;

  memset(maparp,0,size*sizeof(maparp[0]));
  memset(waymap,0,size*sizeof(waymap[0]));

  for (y=0; y<maply; y++)
    maparp[y<<shift|0]=-1;

  for (y=0; y<maply; y++)
    maparp[y<<shift|mapmaxx]=-1;

  for (x=0; x<maplx; x++)
    maparp[0<<shift|x]=-1;

  for (x=0; x<maplx; x++)
    maparp[mapmaxy<<shift|x]=-1;
}

//=====================================================================

bool wayobj::loadmap(const char* fn)
{
  int hf;
#if defined(SPEC_CPU)
  union {
    i32 xRmapsizex;
    struct {
#if defined(SPEC_CPU_BIG_ENDIAN)
      byte xR4,xR3,xR2,xR1;
#else
      byte xR1,xR2,xR3,xR4;
#endif /* SPEC_CPU_BIG_ENDIAN */
    } xRstruc;
  } xRunion;
  union {
    i32 yRmapsizey;
    struct {
#if defined(SPEC_CPU_BIG_ENDIAN)
      byte yR4,yR3,yR2,yR1;
#else
      byte yR1,yR2,yR3,yR4;
#endif /* SPEC_CPU_BIG_ENDIAN */
    } yRstruc;
  }yRunion;
#endif /* SPEC_CPU */
  i32 mapsizex,mapsizey;
  createwaymnginfot info;
  bytept mapp;
  i32 x,y;

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

  info.minx=-1000.0f;
  info.miny=-1000.0f;
  info.maxx=1000.0f;
  info.maxy=1000.0f;
  info.xshift=(i32)(log((double)mapsizex)/log(2.0)+0.5);
  info.yshift=(i32)(log((double)mapsizey)/log(2.0)+0.5);
  info.height1=0.0f;
  info.height2=100000.0f;

  create(info);

  mapp=(bytept)malloc(mapsizex*mapsizey*sizeof(mapp[0]));
  read(hf,mapp,mapsizex*mapsizey*sizeof(mapp[0]));

  for (y=1; y<mapmaxy; y++)
    for (x=1; x<mapmaxx; x++)
      maparp[y<<shift|x]=mapp[y<<shift|x];

  free(mapp);

  close(hf);

  return true;
}

bool wayobj::initmap(i32 mapsizex, i32 mapsizey)
{
  createwaymnginfot info;

  info.minx=-1000.0f;
  info.miny=-1000.0f;
  info.maxx=1000.0f;
  info.maxy=1000.0f;
  info.xshift=(i32)(log((double)mapsizex)/log(2.0)+0.5);
  info.yshift=(i32)(log((double)mapsizey)/log(2.0)+0.5);
  info.height1=0.0f;
  info.height2=100000.0f;

  create(info);

  return true;
}

//=====================================================================

void wayobj::create()
{

}

void wayobj::create(createwaymnginfot info)
{
  i32 size;

  wayobj::info=info;

  mapxshift=info.xshift;
  mapyshift=info.yshift;
  shift=info.xshift;
  mapmaxx=(1<<mapxshift)-1;
  mapmaxy=(1<<mapyshift)-1;
  mapmaxx1=mapmaxx-1;
  mapmaxy1=mapmaxy-1;
  maplx=(1<<mapxshift);
  maply=(1<<mapyshift);

  cellr=(info.maxx-info.minx)/(2*maplx);
  if ((info.maxy-info.miny)/(2*maply)>cellr)
    cellr=(info.maxy-info.miny)/(2*maply);

  xcoef1=maplx/(info.maxx-info.minx);
  xcoef2=-maplx*info.minx/(info.maxx-info.minx);
  ycoef1=maply/(info.maxy-info.miny);
  ycoef2=-maply*info.miny/(info.maxy-info.miny);

  size=(1<<mapxshift)<<mapyshift;

  maparp=new i16[size];
  waymap=new waymapcellt[size];

  clear();


  maxboundlength=6*(2*maplx+2*maply);
  bound1p=new i32[maxboundlength];
  bound2p=new i32[maxboundlength];

  indexxmask=(1<<shift)-1;

  fillnum=0;
}

typedef struct _my_malloc_chunk {
    size_t prev_size;
    size_t size;
}my_malloc_chunk;

void wayobj::destroy()
{
  delete [] bound2p;
  delete [] bound1p;

  delete [] waymap;

  delete [] maparp;
}



