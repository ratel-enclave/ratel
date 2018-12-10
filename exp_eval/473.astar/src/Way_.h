
#ifndef WayH
#define WayH


#include "Types.h"
#include "WayTypes_.h"


struct point16t
{
  i16 x,y;
  point16t (i16 xin, i16 yin) { x=xin; y=yin; }
};
typedef point16t* point16pt;

struct waymapcellt
{
  w16 fillnum;
  w16 num;
};
typedef waymapcellt* waymapcellpt;


struct createwaymnginfot
{
  rnumt minx,maxx;
  rnumt miny,maxy;
  i32 xshift;
  i32 yshift;
  rnumt height1,height2;
};


class wayobj
{
  i32 mapxshift,mapyshift;
  i32 shift;
  i32 mapmaxx,mapmaxy;
  i32 mapmaxx1,mapmaxy1;
  i32 maplx,maply;
  rnumt xcoef1,xcoef2,ycoef1,ycoef2;
  rnumt cellr;
  createwaymnginfot info;
  createwayinfot createwayinfo;
  i16pt maparp;
  waymapcellpt waymap;
  i32pt bound1p,bound2p;
  i32 maxboundlength;
  i32 indexxmask;
  bool flend;
  i32 endindex;
  i16 step;
  w16 fillnum;

  inline i32 getx(rnumt x) { return (i32)(x*xcoef1+xcoef2); }
  inline i32 gety(rnumt y) { return (i32)(y*ycoef1+ycoef2); }
  inline rnumt getxcoord(i32 x) { return info.minx+cellr+((rnumt)x)*(info.maxx-info.minx)/maplx; };
  inline rnumt getycoord(i32 y) { return info.miny+cellr+((rnumt)y)*(info.maxy-info.miny)/maply; };

  bool ismap(i32 x, i32 y);
  rvectort getpoint(i32 index);

  inline i16& map(i32 x, i32 y) { return maparp[y<<shift|x]; };
  inline i16& map(i16 x, i16 y) { return maparp[y<<shift|x]; };

  inline i32 index(i32 x, i32 y) { return (y<<shift)|x; };
  inline i32 indexx(i32 index) { return index&indexxmask; };
  inline i32 indexy(i32 index) { return index>>shift; };

  i32 makebound2(i32pt bound1p, i32 bound1l, i32pt bound2p);
  bool fill(i32 startx, i32 starty, i32 endx, i32 endy);
  bool createwayar(i32 startindex, i32 endindex, wayinfot& wayinfo);
  bool createwayar(i32 startindex, i32 endindex, point16pt& wayar, i32& waylength);
  bool createwayar2(i32 startindex, i32 endindex, wayinfot& wayinfo);

  i32 makeobstaclebound2(i32pt bound1p, i32 bound1l, i32pt bound2p);

  public:

  levelplacept findfreepoints(rvectort startp, i32 minpointqu, i32& pointqu);
  bool findverticalline(i32 x, i32 y, i32& y1, i32& y2);

  bool ismoveable(rnumt x, rnumt y);

  bool findfreepoint(i32 startx, i32 starty, i32& freepointx, i32& freepointy);
  bool findfreepoint(rnumt startx, rnumt starty, rnumt& freepointx, rnumt& freepointy);
  bool wayexist(i32 startx, i32 starty, i32 endx, i32 endy);
  bool createway(i32 startx, i32 starty, i32 endx, i32 endy, point16pt& wayar, i32& waylength);
  bool createway(const rvectort& startp, const rvectort& finishp, bool flcorrect, wayinfot& wayinfo);
  bool createway(const createwayinfot& createinfo, wayinfot& wayinfo);

  void addsphere(const rvectort& centerp, rnumt radius);
  void removesphere(const rvectort& centerp, rnumt radius);
  void addpoint(i32 x, i32 y);
  void removepoint(i32 x, i32 y);
  void clear();

  bool loadmap(const char* fn);
  bool initmap(i32 mapsizex, i32 mapsizey);

  void create(createwaymnginfot info);
  void create();
  void destroy();
};
typedef wayobj* wayobjpt;


#endif
