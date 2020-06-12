#include <time.h>


extern int ukl_clock_getres(clockid_t, struct timespec *);

#define INTERNAL_SYSCALL_DECL(name) do { } while (0)
#define INLINE_SYSCALL_ERROR_RETURN_VALUE(val) ({ errno = val; -1; })
#define INTERNAL_SYSCALL(name, ev, nr, args...) ukl_##name(args)
#define INTERNAL_SYSCALL_ERROR_P(val, err) \
  ((unsigned long int) (long int) (val) >= -4095L)
#define INTERNAL_SYSCALL_ERRNO(val, err)       (-(val))

#include "../clock_getcpuclockid.c"
