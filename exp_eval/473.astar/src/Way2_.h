

#ifndef Way2_h
#define Way2_h


#include "Types.h"
#include "Arrays.h"



class way2obj
{
  bytept mapp;

  struct waymapcellt
  {
    w16 fillnum;
    w16 num;
  };
  typedef waymapcellt* waymapcellpt;
  waymapcellpt waymap;
  w16 fillnum;

  public:
  static const i32 maxmovetact=255;
  private:

  byte movetimear[maxmovetact+1];

  typedef flexarray <pointt> boundart;
  boundart boundar[maxmovetact+1];

  i32 curbound;
  i32 nonboundqu;
  i32 filltact;
  i32 endx,endy;
  i32 startx,starty;
  bool flend;

  i32 mapmaxx,mapmaxy;

  inline byte& map(i32 x, i32 y) { return mapp[x+y*mapsizex]; }
  inline byte movetime(i32 x, i32 y) { return movetimear[mapp[x+y*mapsizex]]; }


  bool isaddtobound(i32 x, i32 y);
  void addtobound(i32 x, i32 y);
  void releasepoint(i32 px, i32 py);
  void releasebound();
  bool fill(i32 startx, i32 starty);
  bool createwayar(pointpt& wayarp, i32& waylength);

  public:

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

  inline byte getterrain(i32 x, i32 y) { return mapp[x+y*mapsizex]; };
  inline void setterrain(i32 x, i32 y, byte movetime) { mapp[x+y*mapsizex]=movetime; };

  bool createway(i32 startx, i32 starty, i32 endx, i32 endy, bytept movetimearp, pointpt& wayar, i32& waylength);

  bool loadmap(const char* fn);
  bool initmap(i32 mapsizexin, i32 mapsizeyin);

  void create();
  void destroy();
};


#endif
