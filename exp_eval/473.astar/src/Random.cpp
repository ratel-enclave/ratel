

#include "Random.h"


static const i32 m1rnd=30269;
static const i32 m2rnd=30307;
static const i32 m3rnd=30323;
static const rnumt invm1rnd=1.0f/m1rnd;
static const rnumt invm2rnd=1.0f/m2rnd;
static const rnumt invm3rnd=1.0f/m3rnd;
static const i32 k1rnd=171;
static const i32 k2rnd=172;
static const i32 k3rnd=170;

static i32 y1rnd=1023;
static i32 y2rnd=11;
static i32 y3rnd=3007;

rnumt myrandom()
{
  rnumt x1,x2,x3;

  y1rnd=(k1rnd*y1rnd) % m1rnd;
  y2rnd=(k2rnd*y2rnd) % m2rnd;
  y3rnd=(k3rnd*y3rnd) % m3rnd;

  x1=(float)y1rnd;
 	x1*=invm1rnd;

  x2=(float)y2rnd;
 	x2*=invm2rnd;

  x3=(float)y3rnd;
 	x3*=invm3rnd;

#if !defined(SPEC_CPU_WINDOWS)
  return (x1+x2+x3)-int32_t(x1+x2+x3);
#else
  return (x1+x2+x3)-__int32(x1+x2+x3);
#endif /* !SPEC_CPU_WINDOWS */
}

rnumt myrandom(rnumt lo, rnumt hi)
{
		return (hi-lo)*myrandom()+lo;
}

i32 myrandom(i32 lo, i32 hi)
{
		return (i32)((hi-lo+1)*myrandom())+lo;
}

i32 random1(i32 max)
{
  return (i32)(myrandom()*((rnumt)max));
}

void initrandom()
{
  y1rnd=1023;
  y2rnd=11;
  y3rnd=3007;
}





