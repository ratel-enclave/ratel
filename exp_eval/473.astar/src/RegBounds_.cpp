
#if defined(SPEC_CPU_WINDOWS_ICL)
#include <mathimf.h>
#endif /* SPEC_CPU_WINDOWS_ICL */

#include <memory.h>
#include <stdlib.h>
#include "RegMng_.h"


void regmngobj::addtobound(boundart& barp, i32 x, i32 y)
{
  bool flpassable;

  flpassable=flpasablear[mapp(x,y)];

  if ((flpassable)&&(flfind==false))
  {
    freepointx=x;
    freepointy=y;

    flfind=true;
    return;
  }

  if (!flpassable)
    barp.add(pointt(x,y));

  mmapp[x+y*mapsizex]=fillnum;
}


void regmngobj::makebound2(boundart& b1arp, boundart& b2arp)
{
  i32 j;
  i32 x1,y1,x2,y2;
  i32 x,y;

  b2arp.clear();

  for (j=0; j<b1arp.elemqu; j++)
  {
    x1=b1arp[j].x-1;
    y1=b1arp[j].y-1;

    x2=b1arp[j].x+1;
    y2=b1arp[j].y+1;

    if (x1<0) x1=0;
    if (y1<0) y1=0;

    if (x2>mapmaxx) x2=mapmaxx;
    if (y2>mapmaxy) y2=mapmaxy;

    for (y=y1; y<=y2; y++)
      for (x=x1; x<=x2; x++)
        if (mmapp[x+y*mapsizex]!=fillnum)
          addtobound(b2arp,x,y);
  }
}

bool regmngobj::findfreeplace(i32 x0, i32 y0, i32& xpl, i32& ypl)
{
  i32 x,y;
  boundart bound1arp,bound2arp;
  i32 boundl;
  bool flodd,newflodd;
  i32 x1,y1,x2,y2;

  flfind=false;

  fillnum++;
  if (fillnum==65535)
  {
    memset(mmapp,0,mapsizex*mapsizey*sizeof(mmapp[0]));
    fillnum=1;
  }

  xpl=-1;
  ypl=-1;
  freepointx=-1;
  freepointy=-1;

  bound1arp.create(128);
  bound2arp.create(128);

  if ((x0>=0)&&(y0>=0)&&(x0<=mapmaxx)&&(y0<=mapmaxy))
    if (mmapp[x0+y0*mapsizex]!=fillnum)
      addtobound(bound1arp,x0,y0);

  x1=x0-1;
  y1=y0-1;

  x2=x0+1;
  y2=y0+1;

  if (x1<0) x1=0;
  if (y1<0) y1=0;

  if (x2>mapmaxx) x2=mapmaxx;
  if (y2>mapmaxy) y2=mapmaxy;

  for (y=y1; y<=y2; y++)
    for (x=x1; x<=x2; x++)
      if (mmapp[x+y*mapsizex]!=fillnum)
        addtobound(bound1arp,x,y);

  boundl=bound1arp.elemqu;


  flodd=false;

  while ((boundl!=0)&&(flfind==false))
  {
    if (flodd==false)
    {
      makebound2(bound1arp,bound2arp);
      boundl=bound2arp.elemqu;
      newflodd=true;
    }
    else
    {
      makebound2(bound2arp,bound1arp);
      boundl=bound1arp.elemqu;
      newflodd=false;
    }

    flodd=newflodd;
  }

  bound1arp.destroy();
  bound2arp.destroy();

  xpl=freepointx;
  ypl=freepointy;
  return flfind;
}

//====================================================
//=====================================================

void regboundobj::addtobound(boundart& barp, i32 x, i32 y)
{
  if (regmngp->flpasablear[mapp(x,y)])
  {
#if defined(SPEC_CPU)
    if (myround(sqr(x-xc)+sqr(y-yc))<=regionradius2)
#else
    if (round(sqr(x-xc)+sqr(y-yc))<=regionradius2)
#endif
    {
      barp.add(pointt(x,y));

      regmapp(x,y)=regionp;
      regionp->square++;
    }
  }
  else
    regmapp(x,y)=nil;
}


void regboundobj::makebound2(boundart& b1arp, boundart& b2arp)
{
  i32 j;
  i32 x,y;
  i32 x1,y1,x2,y2;

  b2arp.clear();

  for (j=0; j<b1arp.elemqu; j++)
  {
    x1=b1arp[j].x-1;
    y1=b1arp[j].y-1;

    x2=b1arp[j].x+1;
    y2=b1arp[j].y+1;

    if (x1<0) x1=0;
    if (y1<0) y1=0;

    if (x2>mapmaxx) x2=mapmaxx;
    if (y2>mapmaxy) y2=mapmaxy;

    for (y=y1; y<=y2; y++)
      for (x=x1; x<=x2; x++)
        if (regmapp(x,y)==nil)
          addtobound(b2arp,x,y);
  }
}


bool regboundobj::step()
{
  if ((boundl==0)||(flexist==false))
  {
    return false;
  }

  if (flodd==false)
  {
    makebound2(boundar,bound2arp);
    boundl=bound2arp.elemqu;
    flodd=true;
  }
  else
  {
    makebound2(bound2arp,boundar);
    boundl=boundar.elemqu;
    flodd=false;
  }

  if (boundl==0)
    return false;
  else
    return true;
}


void regboundobj::firststep(i32 x0, i32 y0, regobjpt regionpin, regmngobjpt regmngpin)
{
  i32 x,y;
  i32 x1,y1,x2,y2;

  xc=x0;
  yc=y0;

  regionp=regionpin;
  regmngp=regmngpin;
  regionmapp=regmngp->regionmapp;
  landscapemapp=regmngp->landscapemapp;
  mapsizex=regmngp->mapsizex;
  mapsizey=regmngp->mapsizey;
  mapmaxx=regmngp->mapmaxx;
  mapmaxy=regmngp->mapmaxy;

  regionradius=regmngp->regionradius;
  regionradius2=regionradius*regionradius;

  if (flexist==false)
  {
    boundl=0;
    return;
  }

  regionp->square=0;

  boundar.create(128);
  bound2arp.create(128);


  x1=x0-1;
  y1=y0-1;

  x2=x0+1;
  y2=y0+1;

  if (x1<0) x1=0;
  if (y1<0) y1=0;

  if (x2>mapmaxx) x2=mapmaxx;
  if (y2>mapmaxy) y2=mapmaxy;

  for (y=y1; y<=y2; y++)
    for (x=x1; x<=x2; x++)
      if (regmapp(x,y)==nil)
        addtobound(boundar,x,y);

  flodd=false;
  boundl=boundar.elemqu;
}


void regboundobj::destroy()
{
  boundar.destroy();
  bound2arp.destroy();
}

