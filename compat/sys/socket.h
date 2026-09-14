#ifndef COMPAT_SYS_SOCKET_H
#define COMPAT_SYS_SOCKET_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <winsock2.h>
#include <ws2tcpip.h>
#include <posix-sockets.h>

/* Undefine posix-sockets macro hooks so native Winsock APIs are called */
#undef socket
#undef bind
#undef listen
#undef accept
#undef connect
#undef getsockname
#undef getpeername
#undef setsockopt
#undef getsockopt
#undef send
#undef recv
#undef select
#undef shutdown
#undef sendmsg

static __inline ssize_t win_compat_sendmsg(int fd, const struct msghdr *msg, int flags) {
    WSABUF bufs[64];
    DWORD sent = 0;
    int i;
    if (!msg || msg->msg_iovlen <= 0) return -1;
    for (i = 0; i < (int)msg->msg_iovlen && i < 64; i++) {
        bufs[i].buf = (char *)msg->msg_iov[i].iov_base;
        bufs[i].len = (ULONG)msg->msg_iov[i].iov_len;
    }
    if (WSASend((SOCKET)fd, bufs, (DWORD)msg->msg_iovlen, &sent, (DWORD)flags, NULL, NULL) == SOCKET_ERROR) {
        int werr = WSAGetLastError();
        if (werr == WSAEWOULDBLOCK) errno = EAGAIN;
        else errno = EIO;
        return -1;
    }
    return (ssize_t)sent;
}
#define sendmsg win_compat_sendmsg

#else
#if __has_include_next(<sys/socket.h>)
#include_next <sys/socket.h>
#endif
#endif

#endif /* COMPAT_SYS_SOCKET_H */
