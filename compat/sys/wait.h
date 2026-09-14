#ifndef COMPAT_SYS_WAIT_H
#define COMPAT_SYS_WAIT_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <posix-wait.h>
#else
#if __has_include_next(<sys/wait.h>)
#include_next <sys/wait.h>
#endif
#endif

#endif /* COMPAT_SYS_WAIT_H */
