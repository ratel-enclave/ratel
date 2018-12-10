

#ifndef RegMng_h
#define RegMng_h

#include "Types.h"
#include "Arrays.h"


class regobj;
typedef regobj* regobjpt;
typedef regobjpt* regobjppt;

class regmngobj;
typedef regmngobj* regmngobjpt;

typedef flexarray <pointt> boundart;
typedef boundart* boundarpt;


class regobj
{
  public:

  i32 internalnum;
  bool flexist;
  bool flredefine;
  regmngobjpt regmngp;

  i32 square;
  pointt centerp;
  i32 index;
  i32 fillnum;
  i32 waydist;

  flexarray <regobjpt> nb1ar;

  private:

  static boundart bound1arp,bound2arp;
  static i32 boundl;
  static bool flodd;

  void addtobound(boundart& barp, i32 x, i32 y);
  void makebound2(boundart& b1arp, boundart& b2arp);

  public:

  void create(i32 x, i32 y);
  void create();
  void destroy();

  regobj(regmngobjpt regmngpin) { regmngp=regmngpin; };
};

inline rnumt regdist2(regobjpt r1, regobjpt r2)
{ return ( sqr((rnumt)(r1->centerp.x-r2->centerp.x))+sqr((rnumt)(r1->centerp.y-r2->centerp.y)) ); }


class regmngobj
{
  void foundemptyregions();
  regobjpt newregion(i32 x0, i32 y0);
  void deleteregions();
  void defineregions();
  void addallregions();
  void addregions();
  void redefineregions();
  void enlargeregions();
  void enlargeneighborses(i32 critical);
  void defineneighborhood1();
  void definemiddleregpoint();
  void normalizemiddlepoint();

  w16pt mmapp;
  w16 fillnum;
  i32 freepointx,freepointy;
  bool flfind;

  void addtobound(boundart& barp, i32 x, i32 y);
  void makebound2(boundart& b1arp, boundart& b2arp);
  bool findfreeplace(i32 x0, i32 y0, i32& xpl, i32& ypl);

  i32 regfillnum;

  public:

  regobjppt regionmapp;
  bytept landscapemapp;
  bool flpasablear[256];
  i32 regionradius,regionradius2;
  rnumt radiuscoef;
  inline regobjpt& regmapp(i32 x, i32 y) { return regionmapp[x+y*mapsizex]; }
  inline byte mapp(i32 x, i32 y) { return landscapemapp[x+y*mapsizex]; }
  i32 mapmaxx,mapmaxy;
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

  largesolidarray <regobjpt> rarp;

  i32 getregfillnum();

  void createregions(i32 regionl);

  bool loadmap(const char* fn);
  bool initmap(i32 mapsizexin, i32 mapsizeyin);

  void create();
  void destroy();
};
typedef regmngobj* regmngobjpt;
 

class regboundobj
{
  boundart boundar;
  boundart bound2arp;
  bool flodd;
  i32 boundl;
  regobjpt regionp;

  i32 xc,yc;
  i32 regionradius,regionradius2;
  regobjppt regionmapp;
  bytept landscapemapp;
  inline regobjpt& regmapp(i32 x, i32 y) { return regionmapp[x+y*mapsizex]; }
  inline byte mapp(i32 x, i32 y) { return landscapemapp[x+y*mapsizex]; }
  i32 mapsizex,mapsizey;
  i32 mapmaxx,mapmaxy;
  regmngobjpt regmngp;

  void addtobound(boundart& barp, i32 x, i32 y);
  void makebound2(boundart& b1arp, boundart& b2arp);

  public:

  bool flexist;

  bool step();
  void firststep(i32 x0, i32 y0, regobjpt regionpin, regmngobjpt regmngpin);

  void destroy();
};
typedef regboundobj* regboundobjpt;


#endif

