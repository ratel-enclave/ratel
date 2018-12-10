

#include <memory.h>
#include <stdlib.h>
#include "RegWay_.h"


bool regwayobj::isaddtobound(regobjpt initialregionp, regobjpt regionp)
{
  if (regionp->fillnum==regfillnum)
    return false;

  // insert additional game logic here

  return true;
}

void regwayobj::addtobound(regboundart& barp, regobjpt regionp)
{
  regionp->fillnum=regfillnum;
  regionp->waydist=filltact;

  if (regionp==rend)
    flend=true;
  barp.add(regionp);
}

void regwayobj::makebound2(regboundart& b1arp, regboundart& b2arp)
{
  i32 i,j;
  regobjpt region1p,region2p;

  b2arp.clear();

  for (j=0; j<b1arp.elemqu; j++)
  {
    region1p=b1arp[j];

    for (i=0; i<region1p->nb1ar.elemqu; i++)
    {
      region2p=region1p->nb1ar[i];

      if (isaddtobound(region1p,region2p))
        addtobound(b2arp,region2p);
    }
  }
}

//=======================================================

bool regwayobj::fill(regobjpt rstart, regobjpt rend)
{
  bool flodd,newflodd;
  i32 boundl;

  flend=false;
  regwayobj::rend=rend;
  regwayobj::rstart=rstart;

  regfillnum=regmngp->getregfillnum();

  rstart->fillnum=regfillnum;
  rstart->waydist=0;

  bound1arp.clear();
  bound1arp.add(rstart);
  boundl=1;

  filltact=1;

  flodd=false;

  while ((boundl!=0)&&(flend==false))
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

    filltact++;
  }

  return flend;
}


i32 regwayobj::getway(regobjpt rend, regobjppt& wayar)
{
  i32 waylength;
  regobjpt regionp;
  regobjpt region2p;
  regobjpt minregionp;
  rnumt dist2,mindist2;
  i32 i,j;

  waylength=filltact;
  wayar=(regobjppt)malloc(waylength*sizeof(wayar[0]));

  wayar[waylength-1]=rend;

  for (i=waylength-1; i>0; i--)
  {
    regionp=wayar[i];

    minregionp=nil;
    mindist2=100000.0f*100000.0f;

    for (j=0; j<regionp->nb1ar.elemqu; j++)
    {
      region2p=regionp->nb1ar[j];
      if (region2p->fillnum==regfillnum)
        if (region2p->waydist==i-1)
        {
          if (minregionp==nil)
          {
            minregionp=region2p;
            mindist2=regdist2(region2p,rend);
          }
          else
          {
            dist2=regdist2(region2p,rend);
            if (dist2<mindist2)
            {
              mindist2=dist2;
              minregionp=region2p;
            }
          }
        }
    }

    if (minregionp==nil)
      return -1;

    wayar[i-1]=minregionp;
  }

  wayar[0]=rstart;
  return waylength;
}

bool regwayobj::createway(regobjpt rstart, regobjpt rfinish, regobjppt& wayar, i32& waylength)
{
  if (rstart==rfinish)
  {
    wayar=(regobjppt)malloc(1*sizeof(wayar[0]));
    wayar[0]=rstart;
    waylength=1;
    return true;
  }

  if (!fill(rstart,rfinish))
  {
    wayar=nil;
    waylength=0;
    return false;
  }

  waylength=getway(rfinish,wayar);

  if (waylength==-1)
  {
    free(wayar);
    wayar=nil;
    waylength=0;
    return false;
  }
  return true;
}

//======================================================
//===========================================================

void regwayobj::create(regmngobjpt regmngpin)
{
  regmngp=regmngpin;

  bound1arp.create(regmngp->rarp.elemqu+1);
  bound2arp.create(regmngp->rarp.elemqu+1);
}

void regwayobj::destroy()
{
  bound1arp.destroy();
  bound2arp.destroy();
}




