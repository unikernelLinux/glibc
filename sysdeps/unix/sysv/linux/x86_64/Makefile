ifneq ($(inhibit-ioperm-iopl),yes)
ifeq ($(subdir),misc)
sysdep_routines += ioperm iopl
endif
endif

ifeq ($(subdir),stdlib)
sysdep_routines += __start_context
endif

ifeq ($(subdir),csu)
gen-as-const-headers += ucontext_i.sym
endif

ifeq ($(subdir),misc)
gen-as-const-headers += sigaltstack-offsets.sym
endif
