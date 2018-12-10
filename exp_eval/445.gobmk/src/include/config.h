/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Connection module. Default standard. */
#define ALTERNATE_CONNECTIONS 1

/* Ruleset. Default Japanese */
#define CHINESE_RULES 0

/* Default level (strength). Up to 10 supported */
#define DEFAULT_LEVEL 10

/* Semeai Variations. 250 default */
#define DEFAULT_SEMEAI_VARIATIONS 250

/* Connection module. Default experimental. */
#define EXPERIMENTAL_CONNECTIONS 1

/* GAIN/LOSS codes. Disabled by default. */
#define EXPERIMENTAL_OWL_EXT 0

/* Semeai module. Default standard. */
#define EXPERIMENTAL_SEMEAI 1

/* Define as 1 to use the grid optimisation, or 2 to run it in self-test mode
   */
#define GRID_OPT 1

/* Define if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

#if !defined(SPEC_CPU_WINDOWS)
/* Define if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1
#endif /* !SPEC_CPU_WINDOWS */

/* Owl Node Limit */
#define OWL_NODE_LIMIT 1000

/* Owl Threats. 0 standard. */
#define OWL_THREATS 0

/* Name of package */
#define PACKAGE "gnugo"

/* The size of a `int', as computed by sizeof. */
#define SIZEOF_INT sizeof(int)

/* The size of a `long', as computed by sizeof. */
#define SIZEOF_LONG sizeof(long)

/* Define if you have the ANSI C header files. */
#define STDC_HEADERS 1

#if !defined(SPEC_CPU_WINDOWS)
/* Define if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1
#endif /* !SPEC_CPU_WINDOWS */

/* Version number of package */
#define VERSION "3.3.14"
