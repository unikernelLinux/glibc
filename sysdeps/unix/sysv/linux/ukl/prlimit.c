#include <sys/resource.h>
#include <stddef.h>

#define INLINE_SYSCALL_ERROR_RETURN_VALUE(val) ({ errno = val; -1; })
#define INLINE_SYSCALL(name, nr, args...) ukl_##name(args)

extern int ukl_prlimit64 (__pid_t pid, enum __rlimit_resource resource,
                          const struct rlimit64 *new_rlimit, struct rlimit64 *old_rlimit);

#include "../prlimit.c"

