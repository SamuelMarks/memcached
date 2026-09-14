#ifndef COMPAT_SYSEXITS_H
#define COMPAT_SYSEXITS_H

#if !defined(_WIN32) && !defined(_MSC_VER)
#if __has_include_next(<sysexits.h>)
#include_next <sysexits.h>
#endif
#endif

#ifndef EX_OK
#define EX_OK 0
#endif
#ifndef EX_USAGE
#define EX_USAGE 64
#endif
#ifndef EX_DATAERR
#define EX_DATAERR 65
#endif
#ifndef EX_NOINPUT
#define EX_NOINPUT 66
#endif
#ifndef EX_NOUSER
#define EX_NOUSER 67
#endif
#ifndef EX_NOHOST
#define EX_NOHOST 68
#endif
#ifndef EX_UNAVAILABLE
#define EX_UNAVAILABLE 69
#endif
#ifndef EX_SOFTWARE
#define EX_SOFTWARE 70
#endif
#ifndef EX_OSERR
#define EX_OSERR 71
#endif
#ifndef EX_OSFILE
#define EX_OSFILE 72
#endif
#ifndef EX_CANTCREAT
#define EX_CANTCREAT 73
#endif
#ifndef EX_IOERR
#define EX_IOERR 74
#endif
#ifndef EX_TEMPFAIL
#define EX_TEMPFAIL 75
#endif
#ifndef EX_PROTOCOL
#define EX_PROTOCOL 76
#endif
#ifndef EX_NOPERM
#define EX_NOPERM 77
#endif
#ifndef EX_CONFIG
#define EX_CONFIG 78
#endif

#endif /* COMPAT_SYSEXITS_H */
