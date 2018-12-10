

#include <memory.h>
#include <stdlib.h>
#include "RegMng_.h"


boundart regobj::bound1arp,regobj::bound2arp;
i32 regobj::boundl;
bool regobj::flodd;

void regobj::addtobound(boundart& barp, i32 x, i32 y)
{
  if (regmngp->flpasablear[regmngp->mapp(x,y)])
  {
    if (myround(sqr(x-centerp.x)+sqr(y-centerp.y))<=regmngp->regionradius2)
    {
      barp.add(pointt(x,y));

      regmngp->regmapp(x,y)=this;
      square++;
    }
  }
}

void regobj::makebound2(boundart& b1arp, boundart& b2arp)
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

    if (x2>regmngp->mapmaxx) x2=regmngp->mapmaxx;
    if (y2>regmngp->mapmaxy) y2=regmngp->mapmaxy;

    for (y=y1; y<=y2; y++)
      for (x=x1; x<=x2; x++)
        if (regmngp->regmapp(x,y)==nil)
          addtobound(b2arp,x,y);
  }
}


void regobj::create(i32 x0, i32 y0)
{
  bool newflodd;
  i32 x,y;
  i32 x1,y1,x2,y2;

  centerp.x=x0;
  centerp.y=y0;

  square=0;

  bound1arp.create(128);
  bound2arp.create(128);

  nb1ar.create(4);


  x1=x0-1;
  y1=y0-1;

  x2=x0+1;
  y2=y0+1;

  if (x1<0) x1=0;
  if (y1<0) y1=0;

  if (x2>regmngp->mapmaxx) x2=regmngp->mapmaxx;
  if (y2>regmngp->mapmaxy) y2=regmngp->mapmaxy;

  for (y=y1; y<=y2; y++)
    for (x=x1; x<=x2; x++)
      if (regmngp->regmapp(x,y)==nil)
        addtobound(bound1arp,x,y);

  boundl=bound1arp.elemqu;


  if (boundl!=0)
    flexist=true;
  else
  {
    flexist=false;

    bound1arp.destroy();
    bound2arp.destroy();

    return;
  }

  flodd=false;

  while (boundl!=0)
  {
    if (flodd==false)
    {
      makebound2(bound1arp,bound2arp);
      newflodd=true;
      boundl=bound2arp.elemqu;
    }
    else
    {
      makebound2(bound2arp,bound1arp);
      newflodd=false;
      boundl=bound1arp.elemqu;
    }

    flodd=newflodd;
  }

  bound1arp.destroy();
  bound2arp.destroy();
}


void regobj::create()
{
  nb1ar.create(4);
  flexist=true;
}


void regobj::destroy()
{
  nb1ar.destroy();
}


