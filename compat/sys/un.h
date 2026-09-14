#ifndef COMPAT_SYS_UN_H
#define COMPAT_SYS_UN_H

#if defined(_WIN32) || defined(_MSC_VER)
#ifndef _SOCKADDR_UN_DEFINED
#define _SOCKADDR_UN_DEFINED
struct sockaddr_un {
    unsigned short sun_family;
    char sun_path[108];
};
#endif
#else
#if __has_include_next(<sys/un.h>)
#include_next <sys/un.h>
#endif
#endif

#endif /* COMPAT_SYS_UN_H */
