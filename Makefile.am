AUTOMAKE_OPTIONS = subdir-objects
ACLOCAL_AMFLAGS=-I m4

lib_LIBRARIES = libstlta.a
libstlta_a_SOURCES = stlta/functions.cpp 
 
pkgconfigdir = /usr/lib/pkgconfig
pkgconfig_DATA = stlta.pc

nobase_include_HEADERS = stlta/ema.h \
	stlta/functions.h \
	stlta/max.h \
	stlta/min.h \
	stlta/momentum.h \
	stlta/roc.h \
	stlta/sma.h \
	stlta/subtract.h