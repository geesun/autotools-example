AC_INIT([helloworld], [1.0], [geesun@gmail.com])

AC_PREREQ([2.68])

AC_CONFIG_SRCDIR([src/helloworld.c])

AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([silent-rules -Wall -Werror subdir-objects foreign])

AM_SILENT_RULES([yes])

dnl Example of default-enabled feature
AC_ARG_ENABLE([feature1],
              AS_HELP_STRING([--disable-feature1], [Disable feature1]))
AS_IF([test "x$enable_feature1" != "xno"], [
         AC_DEFINE([HAVE_FEATURE1], [1], [Enable feature1])
         ])

dnl Example of default-disabled feature
AC_ARG_ENABLE([feature2],
              AS_HELP_STRING([--enable-feature2], [Enable feature2]))
AS_IF([test "x$enable_feature2" = "xyes"], [
       AC_DEFINE([HAVE_FEATURE2], [1], [Enable feature2])
       ])

dnl feature3 has depended on feature2, if feature2 was not enabled, feature3 always disabled
AC_ARG_ENABLE([feature3],
              AS_HELP_STRING([--enable-feature3], [Enable feature3]),
              [
                AS_IF([test "x$enable_feature2" != "xyes"], [enable_feature3="no"])
              ],
              [
                enable_feature3="no"
              ])

AS_IF([test "x$enable_feature3" = "xyes"], [
       AC_DEFINE([HAVE_FEATURE3], [1], [Enable feature3])
       ])


AS_ECHO(["feature1 = $enable_feature1"])
AS_ECHO(["feature2 = $enable_feature2"])
AS_ECHO(["feature3 = $enable_feature3"])


AC_ARG_WITH([foo],
            AS_HELP_STRING([--without-foo], [Ignore presence of foo and disable it]))

AS_ECHO(["with_foo = $with_foo"])
AS_IF([test "x$with_foo" != "xno"], [
              AC_DEFINE([HAVE_FOO], [1], [With foo])
                     ])

AC_ARG_ENABLE([debug],
              AS_HELP_STRING([--enable-debug], [Enable debug feature]))
AM_CONDITIONAL([DEBUG], [test "x$enable_debug" = "xyes"])


AC_PROG_CC

AC_CONFIG_HEADERS([config.h])

AC_CONFIG_FILES([Makefile])

AC_OUTPUT
