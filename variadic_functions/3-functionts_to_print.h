#ifndef FUNCTIONS_TO_PRINT_H
#define FUNCTIONS_TO_PRINT_H
#include <stdio.h>
#include <stdarg.h>
#include "3-functionts_to_print.c"
void p_integer(int  n);
void p_char(char c);
void p_float(double f);
void p_string(char *s);
void print_all(const char * const format, ...);
#endif
