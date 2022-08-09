#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_string(char *s);
int print_buf(char *buf, unsigned int nbuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
#endif
