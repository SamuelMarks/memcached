#ifndef COMPAT_NETINET_TCP_H
#define COMPAT_NETINET_TCP_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <winsock2.h>
#include <ws2tcpip.h>
#else
#if __has_include_next(<netinet/tcp.h>)
#include_next <netinet/tcp.h>
#endif
#endif

#endif /* COMPAT_NETINET_TCP_H */
