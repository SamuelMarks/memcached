#ifndef COMPAT_SYS_PARAM_H
#define COMPAT_SYS_PARAM_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <bsd-sys-param.h>
#ifndef MAXPATHLEN
#define MAXPATHLEN 4096
#endif
#else
#if __has_include_next(<sys/param.h>)
#include_next <sys/param.h>
#endif
#endif

#endif /* COMPAT_SYS_PARAM_H */
