#ifndef COMPAT_PWD_H
#define COMPAT_PWD_H

#if defined(_WIN32) || defined(_MSC_VER)
#include <posix-pwdgrp.h>
#else
#if __has_include_next(<pwd.h>)
#include_next <pwd.h>
#endif
#endif

#endif /* COMPAT_PWD_H */
