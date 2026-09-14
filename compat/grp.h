#ifndef COMPAT_GRP_H
#define COMPAT_GRP_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <posix-pwdgrp.h>
#else
#if __has_include_next(<grp.h>)
#include_next <grp.h>
#endif
#endif

#endif /* COMPAT_GRP_H */
