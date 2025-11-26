#include "main.h"
#include <stdarg.h>
#include <stddef.h>

#include "get_func.h"

/**
 * _printf - Prints using a format specifier
 * @format: The format specifier.
 * @...: The arguments. Must match format specifier
 * Return: The number of characters printed
*/
int _printf(const char *format, ...)
{
	int count = 0;
	int cursor = 0;
	char current = 0;
	va_list args;
	func_t func;

	va_start(args, format);
	while ((current = format[cursor]) != 0) /*Iterate through string*/
	{
		if (current == '%') /*Format start*/
		{
			current = format[cursor + 1];

			if (current == 0)
			{
				return (count);
			}
			func = get_function(current);
			if (func == NULL) /*Unrecognized format*/
			{
				_putchar('%');
				_putchar(current);
				count += 2;
			}
			else /*Recognized format*/
			{
				count += func(args);
			}
			++cursor;
		}
		else /*No formatting*/
		{
			_putchar(current);
			++count;
		}
		++cursor;
	}
	return (count);
}
