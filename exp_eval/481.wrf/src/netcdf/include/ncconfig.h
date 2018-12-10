#ifndef _NCCONFIG_H_
#define _NCCONFIG_H_

#if defined(SPEC_CPU_SOLARIS) && !defined(SPEC_CPU_NO_NCCONFIG_SOLARIS)
# include "ncconfig_solaris.h"

#elif defined(SPEC_CPU_IRIX) && !defined(SPEC_CPU_NO_NCCONFIG_IRIX)
# include "ncconfig_irix.h"

#elif defined(SPEC_CPU_WINDOWS) && !defined(SPEC_CPU_NO_NCCONFIG_WINDOWS)
# include "ncconfig_windows.h"

#elif defined(SPEC_CPU_AIX) && !defined(SPEC_CPU_NO_NCCONFIG_AIX)
# include "ncconfig_aix.h"

#elif defined(SPEC_CPU_MACOSX) && !defined(SPEC_CPU_NO_NCCONFIG_MACOSX)
# include "ncconfig_macosx.h"

#elif (defined(SPEC_CPU_LINUX) || defined(SPEC_CPU_LINUX_PPC)) && \
      !defined(SPEC_CPU_NO_NCCONFIG_LINUX)
# include "ncconfig_linux.h"

#elif !defined(SPEC_CPU_NO_NCCONFIG_GENERIC)
# include "ncconfig_generic.h"

#endif
#endif /* !_NCCONFIG_H_ */
