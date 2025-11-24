#include "main.h"
#include <stdarg.h>

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
	char current = 0

	va_list args;

	va_start(args, format);

	while ((current = format[cursor]) != 0)
	{
		if (current == '%')
		{
			current = format[cursor + 1];
			if (current == 0)
			{
				count += write_char('%');
				return count;
			}

			if (current == 'c')
			{
				count += write_char(va_arg(args, char));
			}
			else if (current == 's')
			{
				count += write_string(va_arg(args, char *));
			}
			else if (current == '%')
			{
				count += write_char('%');
			}
			++cursor;
		}
		++cursor;
	}
	
	return count;
}