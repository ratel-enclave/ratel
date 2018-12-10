

#ifndef Typesh
#define Typesh

#if defined(SPEC_CPU_WINDOWS_ICL)
#include <mathimf.h>
#else                                        
#include <math.h>
#endif /* SPEC_CPU_WINDOWS_ICL */

#if !defined(SPEC_CPU_WINDOWS)
#include <inttypes.h>
#endif /* !SPEC_CPU_WINDOWS */

///////////////////////////////////////////////////////////////////////


#if !defined(SPEC_CPU_WINDOWS)
typedef uint8_t byte;
typedef byte* bytept;
typedef uint16_t w16;
typedef uint32_t w32;
typedef uint64_t w64;

typedef int8_t i8;
typedef int16_t i16;
typedef int32_t i32;
typedef int64_t i64;
#else
typedef unsigned __int8 byte;
typedef byte* bytept;

typedef unsigned __int16 w16;
typedef unsigned __int32 w32;
typedef unsigned __int64 w64;

typedef __int8 i8;
typedef __int16 i16;
typedef __int32 i32;
typedef __int64 i64;
#endif /* !SPEC_CPU_WINDOWS */

typedef	w16* w16pt;
typedef	w32* w32pt;
typedef	w64* w64pt;

typedef	i8* i8pt;
typedef	i16* i16pt;
typedef	i32* i32pt;
typedef	i64* i64pt;

typedef i32pt* i32ppt;

/////////////////////////////////////////////////////////

typedef float rnumt;
typedef rnumt* rnumpt;
typedef rnumpt* rnumppt; 

typedef byte bytecolort;
typedef rnumt rcolort;

struct bytecolor3t
{
		byte r,g,b;

  bytecolor3t() {};
  bytecolor3t(byte rin, byte gin, byte bin) { r=rin; g=gin; b=bin; }
};
typedef bytecolor3t* bytecolor3pt;

bool operator == (const bytecolor3t& color1, const bytecolor3t& color2);

struct bcol4t { byte r,g,b,a; };

union bcolor4t
{
		bcol4t c;
		byte car[4];
};

struct rcolor3t
{
 	rnumt r,g,b;

  rcolor3t() {};
  rcolor3t(rnumt rin, rnumt gin, rnumt bin) { r=rin; g=gin; b=bin; }
};
typedef struct { rnumt r; rnumt g; rnumt b; rnumt alfa; } rcolor3sset;


struct pointt
{
  i32 x,y;

  pointt() {};
  pointt(i32 xin, i32 yin) { x=xin; y=yin; }
};
typedef pointt* pointpt;


class rmatrt;

class	rvectort
      {
								public:

        rnumt x,y,z;
								inline	rnumt norm() const;
								inline rnumt norm2() const;
								inline rnumt normalize();

								void ortbasis(rvectort& v2, rvectort& v3) const;
								void ortbasisz(rvectort& v1, rvectort& v2) const;

        inline void rotmatrix(rmatrt& m) const;
        inline void rotmatrix(rmatrt& m, rnumt phi) const;

								void definerandom();
								void randomvariation(rnumt intense);

//        inline void operator + (const rvectort& v) { x+=v.x; y+=v.y; z+=v.z; }

//        inline void operator = (rvectort v) { x=v.x; y=v.y; z=v.z; }

/*
        inline rvectort(const rvectort& v)
        {
          x=v.x; y=v.y; z=v.z;
        }

        rvectort& operator = (const rvectort &v)
        {
          x=v.x; y=v.y; z=v.z; return *this;
        }
*/

        inline rnumt& operator () (const i32 index) { return *(((rnumpt)this)+index); };

        inline rnumt& r() { return x; }
        inline rnumt& g() { return y; }
        inline rnumt& b() { return z; }
        inline rnumt r() const { return x; }
        inline rnumt g() const { return y; }
        inline rnumt b() const { return z; }

        inline rnumt bright();

        inline void set0() { x=0.0f; y=0.0f; z=0.0f; };

								inline void operator = (const float*	fvectorp);
        //inline operator const rnumpt () const { return (const rnumpt)this; }
        //inline operator rnumpt () { return (rnumpt)this; }
        inline operator const rnumt* () const { return (const rnumt*)this; }
        inline operator rnumt* () { return (rnumt*)this; }

								rvectort() {};
								inline rvectort(rnumt xin, rnumt yin, rnumt zin);
						};
typedef rvectort* rvectorpt;
typedef rvectort rpointt;
typedef rvectorpt rpointpt;


class	gspheret
{
		public:

 	rvectort cp; 
		rnumt r;

		inline bool iscontain(rvectort sphcp, rnumt sphr);

		gspheret () {};
		gspheret (rvectort cpin, rnumt rin) { cp=cpin; r=rin; };
		gspheret (rnumt x, rnumt y, rnumt z, rnumt rin)
		         { cp.x=x; cp.y=y; cp.z=z; r=rin; };
};
typedef gspheret* gspherept;

////////////////////////////////////////////////////////////////////////

#ifndef NULL
#define NULL    0
#endif
#define nil    NULL

///////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////

#define PI		3.1415926535897932384626433832795

#define min_i32	LONG_MIN
#define max_i32	LONG_MAX

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

inline rnumt rvectort::norm() const
{
		return sqrt(x*x+y*y+z*z);
}

inline rnumt rvectort::norm2() const
{
		return x*x+y*y+z*z;
}

inline rnumt rvectort::normalize()
{
		rnumt norm,invnorm;

  norm=sqrt(x*x+y*y+z*z);

		if (norm<0.0000000001f) return 0.0f;

  invnorm=1.0f/norm;

		x*=invnorm;
		y*=invnorm;
		z*=invnorm;

  return norm;
}

inline rnumt rvectort::bright()
{
  rnumt max;
  rnumt invmax;

  if (x>y)
    max=x;
  else
    max=y;

  if (max<z)
    max=z;

  if (max>0.0f)
  {
    invmax=1.0f/max;

    x*=invmax;
    y*=invmax;
    z*=invmax;
  }

  return max;
}


inline rvectort::rvectort(rnumt xin, rnumt yin, rnumt zin)
{
		x=xin;
		y=yin;
		z=zin;
}


inline bool operator == (const rvectort& v1, const rvectort& v2)
{
		return ((v1.x==v2.x)&&(v1.y==v2.y)&&(v1.z==v2.z));
}

inline bool operator != (const rvectort& v1, const rvectort& v2)
{
		return ((v1.x!=v2.x)||(v1.y!=v2.y)||(v1.z!=v2.z));
}

inline bool equality(const rvectort& v1, const rvectort& v2, rnumt e)
{
		return ((fabs(v1.x-v2.x)<e)&&(fabs(v1.y-v2.y)<e)&&(fabs(v1.z-v2.z)<e));
}


inline rvectort operator +	(const rvectort& v1, const rvectort& v2)
{
		return	rvectort(v1.x+v2.x,v1.y+v2.y,v1.z+v2.z);
}

inline rvectort operator -	(const rvectort& v1, const rvectort& v2)
{
		return	rvectort(v1.x-v2.x,v1.y-v2.y,v1.z-v2.z);
}

inline rvectort operator *	(const rvectort& v, const rnumt t)
{
		return	rvectort(v.x*t,v.y*t,v.z*t);
}

inline rvectort operator *	(const rnumt t, const rvectort& v)
{
		return	rvectort(v.x*t,v.y*t,v.z*t);
}

inline rvectort& operator *=	(rvectort& v, const rnumt t)
{
		v.x*=t;
		v.y*=t;
		v.z*=t;

		return v;
}

inline rvectort operator /	(const rvectort& v, const rnumt t)
{
  rnumt invt;

		invt=1.0f/t;
		return	rvectort(v.x*invt,v.y*invt,v.z*invt);
}

inline rvectort& operator /=	(rvectort& v, const rnumt t)
{
  rnumt invt;

		invt=1.0f/t;

		v.x*=invt;
		v.y*=invt;
		v.z*=invt;

		return	v;
}

inline rvectort& operator +=	(rvectort& v1, const rvectort& v2)
{
		v1.x+=v2.x;
		v1.y+=v2.y;
		v1.z+=v2.z;

		return	v1;
}

inline rvectort& operator -=	(rvectort& v1, const rvectort& v2)
{
		v1.x-=v2.x;
		v1.y-=v2.y;
		v1.z-=v2.z;

		return	v1;
}

inline rvectort operator -	(const rvectort& v)
{
		rvectort nv;

		nv.x=-v.x;
		nv.y=-v.y;
		nv.z=-v.z;

		return	nv;
}


inline	rnumt dot(const rvectort& v1, const rvectort& v2)
{
		return (v1.x*v2.x+v1.y*v2.y+v1.z*v2.z);
}

inline rvectort operator & (const rvectort& v1, const rvectort& v2)
{
		rvectort v3;

		v3.x=v1.y*v2.z-v1.z*v2.y;
		v3.y=-(v1.x*v2.z-v1.z*v2.x);
		v3.z=v1.x*v2.y-v1.y*v2.x;

		return v3;
}

//////////////////////////////////////////////////////////////////////////

inline void rvectort::operator = (const float*	fvectorp)
{
		x=fvectorp[0];
		y=fvectorp[1];
		z=fvectorp[2];
}

/////////////////////////////////////////////////////////////////////////

inline rnumt sqr(rnumt x)
{
 	return x*x;
}

inline i32 sqr(i32 x)
{
 	return x*x;
}

inline i32 myround(rnumt x)
{
  return (i32)(x+0.5f);
}


inline rnumt normv(const rvectort& v)
{
 	return sqrt(v.x*v.x+v.y*v.y+v.z*v.z);
}

inline rnumt normv2(const rvectort& v)
{
 	return v.x*v.x+v.y*v.y+v.z*v.z;
}

inline void normalize(rvectort& v)
{
 	rnumt norminv;

 	norminv=sqrt(v.x*v.x+v.y*v.y+v.z*v.z);
  if (norminv<0.000000000001f) return;

  norminv=1.0f/norminv;

 	v.x*=norminv;
 	v.y*=norminv;
 	v.z*=norminv;
}

inline rnumt dist(const rvectort& v1, const rvectort& v2)
{
		return sqrt(sqr(v1.x-v2.x)+sqr(v1.y-v2.y)+sqr(v1.z-v2.z));
}

inline rnumt dist2(const rvectort& v1, const rvectort& v2)
{
		return sqr(v1.x-v2.x)+sqr(v1.y-v2.y)+sqr(v1.z-v2.z);
}


inline	rnumt root(rnumt x)
{
  return sqrt(x);
}


#endif







