#ifndef COMPAT_ARPA_INET_H
#define COMPAT_ARPA_INET_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <winsock2.h>
#include <ws2tcpip.h>
#else
#if __has_include_next(<arpa/inet.h>)
#include_next <arpa/inet.h>
#endif
#endif

#endif /* COMPAT_ARPA_INET_H */
