inhibit-unix-syscalls = yes
inhibit-ioperm-iopl = yes
run-built-tests = no

ifneq (no,$(build-shared))
#$(error Cannot build UKL with DSOs)
endif

ifeq ($(subdir),misc)
sysdep_routines += sysinfo syscall_clock_gettime mremap adjtimex
endif

