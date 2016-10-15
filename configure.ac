#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_PREREQ([2.69])
AC_INIT([STL_TA], [0.0.0], [BUG-REPORT-ADDRESS])
AM_INIT_AUTOMAKE([foreign -Wall -Werror])
AC_CONFIG_MACRO_DIRS([m4])
AC_CONFIG_FILES([Makefile],[STL_TA.pc.in])
 #add STL_TA.pc.in to config files
 #add pc to data install in Makefile.am
 
# Checks for programs.
AC_PROG_CXX
AC_PROG_CC
AC_PROG_RANLIB
AM_PROG_AR

# Checks for libraries.

# Checks for header files.


# Checks for typedefs, structures, and compiler characteristics.
AX_CXX_COMPILE_STDCXX_11([ext],[mandatory])

# Checks for library functions.

AC_OUTPUT
