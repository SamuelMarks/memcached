#ifndef COMPAT_GETOPT_H
#define COMPAT_GETOPT_H

#if defined(_WIN32) || defined(_MSC_VER)
#include "linux-getopt.h"
#else
#if __has_include_next(<getopt.h>)
#include_next <getopt.h>
#else
struct option {
    const char *name;
    int has_arg;
    int *flag;
    int val;
};
#ifndef no_argument
#define no_argument 0
#endif
#ifndef required_argument
#define required_argument 1
#endif
#ifndef optional_argument
#define optional_argument 2
#endif

int getopt_long(int argc, char * const argv[], const char *optstring,
                const struct option *longopts, int *longindex);
#endif
#endif

#endif /* COMPAT_GETOPT_H */
