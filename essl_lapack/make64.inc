PLAT = _essl64
FORTRAN = xlf_r
OPTS = -q64 -O -qnosave
DRVOPTS  = $(OPTS)
NOOPT    =
LOADER   = xlf_r
LOADOPTS =
TIMER    = EXT_ETIME_
ARCH     = ar
ARCHFLAGS= cr
RANLIB   = ranlib
BLASLIB      = -lessl64
LAPACKLIB    = liblapack$(PLAT).a