#ifndef GET_FUNC_H
#define GET_FUNC_H

#include <stdarg.h>

typedef int(*func_t)(va_list);

typedef struct format
{
	char name;
	func_t handler;
} format_t;

func_t get_function(char format);

#endif