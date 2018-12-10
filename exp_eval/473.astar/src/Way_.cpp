

#include <memory.h>
#include "Way_.h"


bool wayobj::ismap(i32 x, i32 y)
{
  if (x<1) return false;
  if (y<1) return false;
  if (x>mapmaxx1) return false;
  if (y>mapmaxy1) return false;
  return true;
}

bool wayobj::ismoveable(rnumt x, rnumt y)
{
  i32 mapx,mapy;

  mapx=getx(x);
  mapy=gety(y);

  if (!ismap(mapx,mapy)) return false;

  if (map(mapx,mapy)) return false;

  return true;
}

rvectort wayobj::getpoint(i32 index)
{
  rvectort v;
  i32 x,y;

  x=index&indexxmask;
  y=index>>shift;
  v.x=info.minx+cellr+((rnumt)x)*(info.maxx-info.minx)/maplx;
  v.y=0.0f;
  v.z=info.miny+cellr+((rnumt)y)*(info.maxy-info.miny)/maply;

  return v;
}


i32 wayobj::makebound2(i32pt bound1p, i32 bound1l, i32pt bound2p)
{
  i32 bound2l;
  i32 index,index1;
  i32 yoffset;
  waymapcellpt waymap;
  i32 i;

  yoffset=maply;
  waymap=wayobj::waymap;

  bound2l=0;
  for (i=0; i<bound1l; i++)
  {
    index=bound1p[i];

    index1=index-yoffset-1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    index1=index-yoffset;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    index1=index-yoffset+1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    index1=index-1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    index1=index+1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    index1=index+yoffset-1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    index1=index+yoffset;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    index1=index+yoffset+1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]==0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;

        if (index1==endindex)
        {
          flend=true;
          return bound2l;
        }
      }

    if (bound2l>=maxboundlength)
      bound2l=maxboundlength-1;
  }

  return bound2l;
}

bool wayobj::fill(i32 startx, i32 starty, i32 endx, i32 endy)
{
  i32 boundl;
  bool flodd;


  if (fillnum==65535)
  {
    memset(waymap,0,((1<<mapxshift)<<mapyshift)*sizeof(waymap[0]));
    fillnum=0;
  }
  fillnum++;

  bound1p[0]=index(startx,starty);
  waymap[starty<<shift|startx].fillnum=fillnum;
  waymap[starty<<shift|startx].num=0;

  flodd=false;
  boundl=1;

  flend=false;
  endindex=index(endx,endy);
  step=1;

  while ((boundl!=0)&&(flend==false))
  {
    if (flodd==false)
    {
      boundl=makebound2(bound1p,boundl,bound2p);
      flodd=true;
    }
    else
    {
      boundl=makebound2(bound2p,boundl,bound1p);
      flodd=false;
    }

    step++;
  }

  return flend;
}


i32 wayobj::makeobstaclebound2(i32pt bound1p, i32 bound1l, i32pt bound2p)
{
  i32 bound2l;
  i32 index,index1;
  i32 yoffset;
  waymapcellpt waymap;
  i32 i;

  yoffset=maply;
  waymap=wayobj::waymap;

  bound2l=0;
  for (i=0; i<bound1l; i++)
  {
    index=bound1p[i];

    index1=index-yoffset-1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }


    index1=index-yoffset;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }
    

    index1=index-yoffset+1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }


    index1=index-1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }


    index1=index+1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }


    index1=index+yoffset-1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }


    index1=index+yoffset;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }


    index1=index+yoffset+1;
    if (waymap[index1].fillnum!=fillnum)
      if (maparp[index1]>0)
      {
        bound2p[bound2l]=index1;
        bound2l++;

        waymap[index1].fillnum=fillnum;
        waymap[index1].num=step;
      }
      else                                   
        if (maparp[index1]==0)
        {
          flend=true;
          endindex=index1;
          return bound2l;
        }

    if (bound2l>=maxboundlength)
      bound2l=maxboundlength-1;
  }

  return bound2l;
}

bool wayobj::findfreepoint(i32 startx, i32 starty, i32& freepointx, i32& freepointy)
{
  i32 boundl;
  bool flodd;


  if (!ismap(startx,starty))
  {
    freepointx=startx;
    freepointy=starty;
    return true;
  }

  if (map(startx,starty)==0)
  {
    freepointx=startx;
    freepointy=starty;
    return true;
  }

  if (fillnum==65535)
  {
    memset(waymap,0,((1<<mapxshift)<<mapyshift)*sizeof(waymap[0]));
    fillnum=0;
  }
  fillnum++;

  bound1p[0]=index(startx,starty);
  waymap[starty<<shift|startx].fillnum=fillnum;
  waymap[starty<<shift|startx].num=0;

  flodd=false;
  boundl=1;

  flend=false;
  step=1;

  while ((boundl!=0)&&(flend==false))
  {
    if (flodd==false)
    {
      boundl=makeobstaclebound2(bound1p,boundl,bound2p);
      flodd=true;
    }
    else
    {
      boundl=makeobstaclebound2(bound2p,boundl,bound1p);
      flodd=false;
    }

    step++;
  }

  freepointx=indexx(endindex);
  freepointy=indexy(endindex);

  return flend;
}

bool wayobj::findfreepoint(rnumt startx, rnumt starty, rnumt& freepointx, rnumt& freepointy)
{
  i32 x,y,freex,freey;
  bool res;

  x=getx(startx);
  y=gety(starty);

  res=findfreepoint(x,y,freex,freey);

  freepointx=getxcoord(freex);
  freepointy=getycoord(freey);

  return res;
}




