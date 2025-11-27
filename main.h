#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int write_char(va_list args);
int write_string(va_list args);
int write_percent(va_list args);
int write_integer(va_list args);

/*Custom*/
int write_bin(va_list args);

#define STDOUT 1

#endif