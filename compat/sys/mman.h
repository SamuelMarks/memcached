#ifndef COMPAT_SYS_MMAN_H
#define COMPAT_SYS_MMAN_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <posix-mman.h>
#else
#if __has_include_next(<sys/mman.h>)
#include_next <sys/mman.h>
#endif
#endif

#endif /* COMPAT_SYS_MMAN_H */
