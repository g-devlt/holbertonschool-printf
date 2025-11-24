#include "main.h"
#include <unistd.h>
#include <stddef.h>

/**
* write_char - Prints a single character.
* @args: va_list containing the character to print.
* Return: Number of characters printed (1)
*/

int write_char(va_list args)
{
	char c = va_arg(args, int);
	return (write(1, &c, 1));
}

/**
* write_string - Prints a string.
* @args: va_list containing the string to print.
* Return: Number of characters printed
*/

int write_string(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (!s)
		s = NULL;

	while (s[len])
		len++;

	return (write(1, s, len));
}

/**
* write_percent - 
* @args:
* Return: 
*/

int write_percent(va_list args)
{
	(void)args;
		return (write(1, '%', 1));
}
