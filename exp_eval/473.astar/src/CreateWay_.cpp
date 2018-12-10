

#include <stdlib.h>
#include "Way_.h"


const i32 alfa1=(i32)(100*sin(3*PI/8)/cos(3*PI/8)+0.5);
const i32 alfa2=(i32)(100*sin(1*PI/8)/cos(1*PI/8)+0.5);
const i32 alfa3=(i32)(100*sin(-1*PI/8)/cos(-1*PI/8)+0.5);
const i32 alfa4=(i32)(100*sin(-3*PI/8)/cos(-3*PI/8)+0.5);

bool wayobj::createwayar(i32 startindex, i32 endindex, wayinfot& wayinfo)
{
  const point16t deltaar[8]={point16t(-1,+1),point16t(00,+1),point16t(+1,+1),
                           point16t(+1,00),point16t(+1,-1),point16t(00,-1),
                           point16t(-1,-1),point16t(-1,00)};
  rvectorpt wayarp;
  i32 length;
  i32 yoffset;
  waymapcellpt waymap;
  i32 index,index1;
  i32 startx,starty;
  i32 x,y;
  i32 x1,y1;
  i32 dx,dy;
  i32 dpx,dpy;
  i32 a,b,c,d;
  i32 deltanum;
  i32 delta1num,delta2num;
  i32 i,j;

  length=step;
  wayarp=new rvectort[length];

  yoffset=maply;
  waymap=wayobj::waymap;

  index=endindex;
  startx=indexx(startindex);
  starty=indexy(startindex);

  for (i=length-2; i>0; i--)
  {
    x=indexx(index);
    y=indexy(index);

    dpx=startx-x;
    dpy=starty-y;

    if (dpx>0)
      dpx=1;
    else
      if (dpx<0)
        dpx=-1;

    if (dpy>0)
      dpy=1;
    else
      if (dpy<0)
        dpy=-1;

    if (100*dpy>=alfa1*dpx) a=1;
    else a=-1;
    if (100*dpy>=alfa2*dpx) b=1;
    else b=-1;
    if (100*dpy>=alfa3*dpx) c=1;
    else c=-1;
    if (100*dpy>=alfa4*dpx) d=1;
    else d=-1;


    if ((a==1)&&(d==1))
    {
      dx=0;
      dy=1;
      deltanum=1;
      goto getsector;
    }
    if ((b==1)&&(a==-1))
    {
      dx=1;
      dy=1;
      deltanum=2;
      goto getsector;
    }
    if ((c==1)&&(b==-1))
    {
      dx=1;
      dy=0;
      deltanum=3;
      goto getsector;
    }
    if ((d==1)&&(c==-1))
    {
      dx=1;
      dy=-1;
      deltanum=4;
      goto getsector;
    }
    if ((a==-1)&&(d==-1))
    {
      dx=0;
      dy=-1;
      deltanum=5;
      goto getsector;
    }
    if ((a==1)&&(b==-1))
    {
      dx=-1;
      dy=-1;
      deltanum=6;
      goto getsector;
    }
    if ((b==1)&&(c==-1))
    {
      dx=-1;
      dy=0;
      deltanum=7;
      goto getsector;
    }
    if ((c==1)&&(d==-1))
    {
      dx=-1;
      dy=1;
      deltanum=0;
      goto getsector;
    }

    dx=-1;
    dy=-1;
    deltanum=6;

getsector:

    delta1num=deltanum;
    delta2num=(deltanum+1)&7;

    for (j=0; j<4; j++)
    {
      x1=x+deltaar[delta1num].x;
      y1=y+deltaar[delta1num].y;

      index1=wayobj::index(x1,y1);
      if (waymap[index1].fillnum==fillnum)
        if (waymap[index1].num==i)
        {
          wayarp[i]=getpoint(index1);
          index=index1;
          goto newpoint;
        }

      x1=x+deltaar[delta2num].x;
      y1=y+deltaar[delta2num].y;

      index1=wayobj::index(x1,y1);
      if (waymap[index1].fillnum==fillnum)
        if (waymap[index1].num==i)
        {
          wayarp[i]=getpoint(index1);
          index=index1;
          goto newpoint;
        }

      delta1num--;
      if (delta1num<0) delta1num=7;

      delta2num=(delta2num+1)&7;
    }


    delete [] wayarp;
    return false;

newpoint:
    continue;
  }

  wayarp[0]=createwayinfo.startp;
  wayarp[length-1]=createwayinfo.finishp;

  wayinfo.flexist=true;
  wayinfo.wayarp=wayarp;
  wayinfo.wayarsize=length;
  wayinfo.flcorrect=false;

  return true;
}

bool wayobj::createwayar(i32 startindex, i32 endindex, point16pt& wayar, i32& waylength)
{
  const point16t deltaar[8]={point16t(-1,+1),point16t(00,+1),point16t(+1,+1),
                           point16t(+1,00),point16t(+1,-1),point16t(00,-1),
                           point16t(-1,-1),point16t(-1,00)};
  i32 length;
  i32 yoffset;
  waymapcellpt waymap;
  i32 index,index1;
  i32 startx,starty;
  i32 x,y;
  i32 x1,y1;
  i32 dx,dy;
  i32 dpx,dpy;
  i32 a,b,c,d;
  i32 deltanum;
  i32 delta1num,delta2num;
  i32 i,j;

  length=step;
  wayar=(point16pt)malloc(length*sizeof(wayar[0]));

  yoffset=maply;
  waymap=wayobj::waymap;

  index=endindex;
  startx=indexx(startindex);
  starty=indexy(startindex);

  for (i=length-2; i>0; i--)
  {
    x=indexx(index);
    y=indexy(index);

    dpx=startx-x;
    dpy=starty-y;

    if (dpx>0)
      dpx=1;
    else
      if (dpx<0)
        dpx=-1;

    if (dpy>0)
      dpy=1;
    else
      if (dpy<0)
        dpy=-1;

    if (100*dpy>=alfa1*dpx) a=1;
    else a=-1;
    if (100*dpy>=alfa2*dpx) b=1;
    else b=-1;
    if (100*dpy>=alfa3*dpx) c=1;
    else c=-1;
    if (100*dpy>=alfa4*dpx) d=1;
    else d=-1;


    if ((a==1)&&(d==1))
    {
      dx=0;
      dy=1;
      deltanum=1;
      goto getsector;
    }
    if ((b==1)&&(a==-1))
    {
      dx=1;
      dy=1;
      deltanum=2;
      goto getsector;
    }
    if ((c==1)&&(b==-1))
    {
      dx=1;
      dy=0;
      deltanum=3;
      goto getsector;
    }
    if ((d==1)&&(c==-1))
    {
      dx=1;
      dy=-1;
      deltanum=4;
      goto getsector;
    }
    if ((a==-1)&&(d==-1))
    {
      dx=0;
      dy=-1;
      deltanum=5;
      goto getsector;
    }
    if ((a==1)&&(b==-1))
    {
      dx=-1;
      dy=-1;
      deltanum=6;
      goto getsector;
    }
    if ((b==1)&&(c==-1))
    {
      dx=-1;
      dy=0;
      deltanum=7;
      goto getsector;
    }
    if ((c==1)&&(d==-1))
    {
      dx=-1;
      dy=1;
      deltanum=0;
      goto getsector;
    }

    dx=-1;
    dy=-1;
    deltanum=6;

getsector:

    delta1num=deltanum;
    delta2num=(deltanum+1)&7;

    for (j=0; j<4; j++)
    {
      x1=x+deltaar[delta1num].x;
      y1=y+deltaar[delta1num].y;

      index1=wayobj::index(x1,y1);
      if (waymap[index1].fillnum==fillnum)
        if (waymap[index1].num==i)
        {
          wayar[i].x=x1;
          wayar[i].y=y1;
          index=index1;
          goto newpoint;
        }

      x1=x+deltaar[delta2num].x;
      y1=y+deltaar[delta2num].y;

      index1=wayobj::index(x1,y1);
      if (waymap[index1].fillnum==fillnum)
        if (waymap[index1].num==i)
        {
          wayar[i].x=x1;
          wayar[i].y=y1;
          index=index1;
          goto newpoint;
        }

      delta1num--;
      if (delta1num<0) delta1num=7;

      delta2num=(delta2num+1)&7;
    }


    free(wayar);
    return false;

newpoint:
    continue;
  }

  wayar[0]=point16t(indexx(startindex),indexy(startindex));
  wayar[length-1]=point16t(indexx(endindex),indexy(endindex));

  waylength=length;
  
  return true;
}

//=====================================================================

bool wayobj::createwayar2(i32 startindex, i32 endindex, wayinfot& wayinfo)
{
  rvectorpt wayarp;
  i32 length;
  i32 yoffset;
  waymapcellpt waymap;
  i32 index,index1;
  i32 startx,starty;
  i32 x,y;
  i32 dx,dy;
  i32 dpx,dpy;
  i32 a,b,c,d;
  i32 i;

  length=step;
  wayarp=new rvectort[length];

  yoffset=maply;
  waymap=wayobj::waymap;

  index=endindex;
  startx=indexx(startindex);
  starty=indexy(startindex);

  for (i=length-2; i>0; i--)
  {
    x=indexx(index);
    y=indexy(index);

    dpx=startx-x;
    dpy=starty-y;

    if (dpx>0)
      dpx=1;
    else
      if (dpx<0)
        dpx=-1;

    if (dpy>0)
      dpy=1;
    else
      if (dpy<0)
        dpy=-1;

    if (100*dpy>=alfa1*dpx) a=1;
    else a=-1;
    if (100*dpy>=alfa2*dpx) b=1;
    else b=-1;
    if (100*dpy>=alfa3*dpx) c=1;
    else c=-1;
    if (100*dpy>=alfa4*dpx) d=1;
    else d=-1;


    if ((a==1)&&(d==1))
    {
      dx=0;
      dy=1;
      goto getsector;
    }
    if ((b==1)&&(a==-1))
    {
      dx=1;
      dy=1;
      goto getsector;
    }
    if ((c==1)&&(b==-1))
    {
      dx=1;
      dy=0;
      goto getsector;
    }
    if ((d==1)&&(c==-1))
    {
      dx=1;
      dy=-1;
      goto getsector;
    }
    if ((a==-1)&&(d==-1))
    {
      dx=0;
      dy=-1;
      goto getsector;
    }
    if ((a==1)&&(b==-1))
    {
      dx=-1;
      dy=-1;
      goto getsector;
    }
    if ((b==1)&&(c==-1))
    {
      dx=-1;
      dy=0;
      goto getsector;
    }
    if ((c==1)&&(d==-1))
    {
      dx=-1;
      dy=1;
      goto getsector;
    }

    dx=-1;
    dy=-1;

getsector:


    x=x+dx;
    y=y+dy;


    index1=wayobj::index(x,y);
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }


    index1=index-yoffset-1;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    index1++;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    index1++;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    index1=index-1;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    index1=index+1;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    index1=index+yoffset-1;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    index1++;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    index1++;
    if (waymap[index1].fillnum==fillnum)
      if (waymap[index1].num==i)
      {
        wayarp[i]=getpoint(index1);
        index=index1;
        continue;
      }

    delete [] wayarp;
    return false;
  }

  wayarp[0]=createwayinfo.startp;
  wayarp[length-1]=createwayinfo.finishp;

  wayinfo.flexist=true;
  wayinfo.wayarp=wayarp;
  wayinfo.wayarsize=length;
  wayinfo.flcorrect=false;

  return true;
}

//=====================================================================
//=====================================================================

bool wayobj::wayexist(i32 startx, i32 starty, i32 endx, i32 endy)
{
  if ((!ismap(startx,starty))||(!ismap(endx,endy)))
    return false;

  if (map(endx,endy)!=0)
    return false;

  if ((startx==endx)&&(starty==endy))
    return true;

  return fill(startx,starty,endx,endy);
}

//=====================================================================

bool wayobj::createway(const rvectort& startp, const rvectort& finishp, bool flcorrect, wayinfot& wayinfo)
{
  i32 startx,starty;
  i32 endx,endy;
  bool flcorrectend;


  createwayinfo.startp=startp;
  createwayinfo.finishp=finishp;
  createwayinfo.flcorrect=flcorrect;

  startx=getx(startp.x);
  starty=gety(startp.z);

  endx=getx(finishp.x);
  endy=gety(finishp.z);

  flcorrectend=false;

  if ((!ismap(startx,starty))||(!ismap(endx,endy)))
  {
    wayinfo.flexist=false;
    wayinfo.wayarp=nil;
    wayinfo.wayarsize=0;
    wayinfo.flcorrect=flcorrectend;
    return false;
  }


  if (map(endx,endy)!=0)
    if (flcorrect==false)
    {
      wayinfo.flexist=false;
      wayinfo.wayarp=nil;
      wayinfo.wayarsize=0;
      wayinfo.flcorrect=flcorrectend;
      return false;
    }
    else
    {
      if (findfreepoint(endx,endy,endx,endy)==false)
      {
        wayinfo.flexist=false;
        wayinfo.wayarp=nil;
        wayinfo.wayarsize=0;
        wayinfo.flcorrect=flcorrectend;
        return false;
      }
      else
      {
        flcorrectend=true;
        createwayinfo.finishp=getpoint(index(endx,endy));
      }
    }


  if ((startx==endx)&&(starty==endy))
  {
    wayinfo.flexist=true;
    wayinfo.wayarp=new rvectort[2];
    wayinfo.wayarp[0]=startp;
    wayinfo.wayarp[1]=createwayinfo.finishp;
    wayinfo.wayarsize=2;
    wayinfo.flcorrect=flcorrectend;
    return true;
  }


  if (!fill(startx,starty,endx,endy))
  {
    wayinfo.flexist=false;
    wayinfo.wayarp=nil;
    wayinfo.wayarsize=0;
    wayinfo.flcorrect=flcorrectend;
    return false;
  }


  wayinfo.flcorrect=flcorrectend;
  if (!createwayar(index(startx,starty),endindex,wayinfo))
  {
    wayinfo.flexist=false;
    wayinfo.wayarp=nil;
    wayinfo.wayarsize=0;
    wayinfo.flcorrect=flcorrectend;
    return false;
  }

  return true;
}

bool wayobj::createway(const createwayinfot& createinfo, wayinfot& wayinfo)
{
  return createway(createinfo.startp,createinfo.finishp,createinfo.flcorrect,wayinfo);
}


bool wayobj::createway(i32 startx, i32 starty, i32 endx, i32 endy, point16pt& wayar, i32& waylength)
{
  //i32 startx,starty;
  //i32 endx,endy;


  if ((!ismap(startx,starty))||(!ismap(endx,endy)))
  {
    wayar=nil;
    waylength=0;
    return false;
  }


  if (map(endx,endy)!=0)
  {
    wayar=nil;
    waylength=0;
    return false;
  }

  if ((startx==endx)&&(starty==endy))
  {
    wayar=(point16pt)malloc(1*sizeof(wayar[0]));
    waylength=1;
    return true;
  }


  if (!fill(startx,starty,endx,endy))
  {
    wayar=nil;
    waylength=0;
    return false;
  }


  if (!createwayar(index(startx,starty),endindex,wayar,waylength))
  {
    wayar=nil;
    waylength=0;
    return false;
  }

  return true;
}


