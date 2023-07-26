#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>


int _printf(const char *format, ...);
int display(char c);
int specC(va_list a);
int specS(va_list a);
int specp(va_list a);
int specD(va_list a);
int specI(va_list a);
int specB(va_list a);
char *rev(char *s);
int displayB(unsigned int n);

#endif/*MAIN_H*/
