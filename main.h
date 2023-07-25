#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int display(char c);
void specC(va_list a);
void specS(va_list a);
void specp(va_list a);

#endif/*MAIN_H*/
