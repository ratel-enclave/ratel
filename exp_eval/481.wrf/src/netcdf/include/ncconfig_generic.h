/* Generic ncconfig.h file; shows the defines that may be set/unset.
   By default is setup for a somewhat generic Unix, and probably won't
   work for anyone.  It _is_ totally tweakable, though.
   - cds 10 June 2005
 */
#ifndef _NCCONFIG_GENERIC_H_
#define _NCCONFIG_GENERIC_H_

/* Define if you're on an HP-UX system. */
/* #undef _HPUX_SOURCE */

/* Define if your struct stat has st_blksize.  */
#if !defined(SPEC_CPU_NO_ST_BLKSIZE)
#define HAVE_ST_BLKSIZE 1
#endif

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* Define if you have the ANSI C header files.  */
#if !defined(SPEC_CPU_NO_STDC_HEADERS)
#define STDC_HEADERS 1
#endif

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
#if !defined(SPEC_CPU_WORDS_LITTLEENDIAN)
#define WORDS_BIGENDIAN 1
#endif

/* Define if you don't have the <stdlib.h>.  */
/* #undef NO_STDLIB_H */

/* Define if you don't have the <sys/types.h>.  */
/* #undef NO_SYS_TYPES_H */

/* Define if you have the ftruncate function  */
#if !defined(SPEC_CPU_NO_HAVE_FTRUNCATE)
#define HAVE_FTRUNCATE 1
#endif

/* Define if you have alloca, as a function or macro.  */
#if !defined(SPEC_CPU_NO_HAVE_ALLOCA)
#define HAVE_ALLOCA 1
#endif

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
#if !defined(SPEC_CPU_NO_HAVE_ALLOCA_H)
#define HAVE_ALLOCA_H 1
#endif

/* Define if you don't have the strerror function  */
/* #undef NO_STRERROR */

/* The number of bytes in a size_t */
#if !defined(SIZEOF_SIZE_T)
# if defined(SPEC_CPU_ILP64) || defined(SPEC_CPU_LP64) || defined(SPEC_CPU_P64)
#  define SIZEOF_SIZE_T 8
# else
#  define SIZEOF_SIZE_T 4
# endif /* !64-bit pointers */
#endif /* !def SIZEOF_SIZE_T */

/* The number of bytes in a off_t */
#if !defined(SIZEOF_OFF_T)
# define SIZEOF_OFF_T 8
#endif

/* Define to `int' if system doesn't define.  */
/* #undef ssize_t */

/* Define to `int' if system doesn't define.  */
/* #undef ptrdiff_t */

/* Define to `unsigned char' if system doesn't define.  */
#if !defined(SPEC_CPU_UCHAR_DEFINED)
# define uchar unsigned char
#endif

/* Define if the system does not use IEEE floating point representation */
/* #undef NO_IEEE_FLOAT */

/* The number of bytes in a double.  */
#if !defined(SIZEOF_DOUBLE)
# define SIZEOF_DOUBLE 8
#endif

/* The number of bytes in a float.  */
#if !defined(SIZEOF_FLOAT)
# define SIZEOF_FLOAT 4
#endif

/* The number of bytes in a int.  */
#if !defined(SIZEOF_INT)
# if defined(SPEC_CPU_ILP64)
#  define SIZEOF_INT 8
# else
#  define SIZEOF_INT 4
# endif
#endif

/* The number of bytes in a long.  */
#if !defined(SIZEOF_LONG)
# if defined(SPEC_CPU_LP64)
#  define SIZEOF_LONG 8
# else
#  define SIZEOF_LONG 4
# endif /* !SPEC_CPU_LP64 */
#endif /* !def SIZEOF_LONG */

/* The number of bytes in a short.  */
#if !defined(SIZEOF_SHORT)
# define SIZEOF_SHORT 2
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
#if !defined(_FILE_OFFSET_BITS) && !defined(SPEC_CPU_NO_FILE_OFFSET_BITS)
# define _FILE_OFFSET_BITS 64
#endif

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

#endif /* !_NCCONFIG_GENERIC_H_ */
