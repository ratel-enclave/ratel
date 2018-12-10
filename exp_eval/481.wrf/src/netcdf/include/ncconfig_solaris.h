#ifndef _NCCONFIG_SOLARIS_H_
#define _NCCONFIG_SOLARIS_H_

/* Define if your struct stat has st_blksize.  */
#define HAVE_ST_BLKSIZE 1

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if your processor stores words with the most significant
   byte first (like Motorola and SPARC, unlike Intel and VAX).  */
#if !defined(SPEC_CPU_SOLARIS_X86)
#define WORDS_BIGENDIAN 1
#endif

/* Define if you have the ftruncate function  */
#define HAVE_FTRUNCATE 1

/* Define if you have alloca, as a function or macro.  */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
#define HAVE_ALLOCA_H 1

/* The number of bytes in a size_t */
#define SIZEOF_SIZE_T 4

/* The number of bytes in a off_t */
#define SIZEOF_OFF_T 8

/* Define to `unsigned char' if system doesn't define.  */
#define uchar unsigned char

/* The number of bytes in a double.  */
#define SIZEOF_DOUBLE 8

/* The number of bytes in a float.  */
#define SIZEOF_FLOAT 4

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 4

/* The number of bytes in a short.  */
#define SIZEOF_SHORT 2

/* Number of bits in a file offset, on hosts where this is settable. */
#define _FILE_OFFSET_BITS 64

#endif /* !_NCCONFIG_SOLARIS_H_ */
