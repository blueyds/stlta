AUTOMAKE_OPTIONS = subdir-objects serial-tests
ACLOCAL_AMFLAGS=-I m4
AM_CPPFLAGS = $(BOOST_CPPFLAGS)

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
	
TESTS = stlta_test
check_PROGRAMS = stlta_test
stlta_test_SOURCES = stlta/functions.cpp test/main.cpp