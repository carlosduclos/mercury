AC_PREREQ([2.61])
AC_INIT([rcu], [0.1], [carlosduclosv@yahoo.com])
AM_INIT_AUTOMAKE

AC_PROG_MAKE_SET

dnl Check that we have a C++11 compiler and fail if not
AC_PROG_CXX
AC_LANG(C++)
AX_CXX_COMPILE_STDCXX([11], [noext], [mandatory])
AC_PROG_RANLIB

dnl Check for required header files 
AC_HEADER_DIRENT

dnl Check for required C library functions
AC_FUNC_STAT
AC_FUNC_LSTAT


AC_CONFIG_MACRO_DIR([m4])

AC_CONFIG_FILES([Makefile src/Makefile])

AC_CONFIG_HEADERS([src/config.h])

AC_OUTPUT
