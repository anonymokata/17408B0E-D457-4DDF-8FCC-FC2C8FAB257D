## Process this file with automake to produce Makefile.in

TESTS = check_RomanCalculator
check_PROGRAMS = check_RomanCalculator
check_money_SOURCES = check_RomanCalculator.c $(top_builddir)/src/RomanCalculator.h
check_money_CFLAGS = @CHECK_CFLAGS@
check_money_LDADD = $(top_builddir)/src/libRomanCalculator.la @CHECK_LIBS@
