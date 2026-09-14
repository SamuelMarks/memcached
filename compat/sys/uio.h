#ifndef COMPAT_SYS_UIO_H
#define COMPAT_SYS_UIO_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <posix-sys-uio.h>
#else
#if __has_include_next(<sys/uio.h>)
#include_next <sys/uio.h>
#endif
#endif

#endif /* COMPAT_SYS_UIO_H */
