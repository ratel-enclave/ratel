

#include <memory.h>
#include <stdlib.h>
#include "Way_.h"
#include "Arrays.h"


levelplacept wayobj::findfreepoints(rvectort startp, i32 minpointqu, i32& pointqu)
{
  i32 startx,starty;
  flexarray <levelplacet> contour;
  i32 minneighbourcoef;
  levelplacet place;
  levelplacept placearp;
  w16 fillnum;
  i32 neighboursqu;
  i32 yoffset;
  i32 index;
  i32 index1;
  i32 x,y;
  i32 i;


  startx=getx(startp.x);
  starty=gety(startp.z);

  if (!ismap(startx,starty))
  {
    startx=maplx>>1;
    starty=maply>>1;
  }

  if (map(startx,starty)!=0)
    if (findfreepoint(startx,starty,startx,starty)==false)
      return nil;

  fill(startx,starty,0,0);
  fillnum=wayobj::fillnum;


  contour.create(maplx*10);
  yoffset=maply;
  minneighbourcoef=7;

  do
  {
    contour.clear();

    for (y=1; y<mapmaxy; y++)
      for (x=1; x<mapmaxx; x++)
      {
        index=y<<shift|x;

        if (waymap[index].fillnum==fillnum)
        {
          neighboursqu=0;

          index1=index-yoffset-1;
          if (maparp[index1]!=0)
            neighboursqu++;

          index1=index-yoffset;
          if (maparp[index1]!=0)
            neighboursqu++;

          index1=index-yoffset+1;
          if (maparp[index1]!=0)
            neighboursqu++;

          index1=index-1;
          if (maparp[index1]!=0)
            neighboursqu++;

          index1=index+1;
          if (maparp[index1]!=0)
            neighboursqu++;

          index1=index+yoffset-1;
          if (maparp[index1]!=0)
            neighboursqu++;

          index1=index+yoffset;
          if (maparp[index1]!=0)
            neighboursqu++;

          index1=index+yoffset+1;
          if (maparp[index1]!=0)
            neighboursqu++;


          if (neighboursqu>=minneighbourcoef)
          {
            place.x=indexx(index);
            place.y=indexy(index);
            place.hiding=neighboursqu*(1/8.0f);
            contour.add(place);
          }
        }
      }

    minneighbourcoef--;  
  }
  while ((contour.elemqu<minpointqu)&&(minneighbourcoef>=-1));


  if (minneighbourcoef<-1)
  {
    contour.destroy();
    return nil;
  }

  pointqu=contour.elemqu;
  placearp=new levelplacet[pointqu];

  for (i=0; i<pointqu; i++)
  {
    placearp[i].x=contour.ep[i].x;
    placearp[i].y=contour.ep[i].y;
    placearp[i].rx=info.minx+cellr+((rnumt)placearp[i].x)*(info.maxx-info.minx)/maplx;
    placearp[i].ry=info.miny+cellr+((rnumt)placearp[i].y)*(info.maxy-info.miny)/maply;
    placearp[i].hiding=contour.ep[i].hiding;
  }

  contour.destroy();

  return placearp;
}


bool wayobj::findverticalline(i32 x, i32 y, i32& y1, i32& y2)
{
  i32 yy;
  
  y1=y;
  y2=y;
  for (yy=y; yy<maply; yy++)
    if (map(x,yy)!=0)
    {
      y2=yy;
      break;
    }
  for (yy=y; yy>0; yy--)
    if (map(x,yy)!=0)
    {
      y1=yy;
      break;
    }

  return true;
}

