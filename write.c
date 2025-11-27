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
		return (write(STDOUT, &c, 1));
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

	if (str == NULL)
		return(write(STDOUT, "(null)", 6));

	while (str[len])
		len++;

	return (write(STDOUT, str, len));
}

/**
* write_percent - Write the '%' character to the standard output
* @args: List of arguments (unused)
*
* Return: Always returns 1, the number of characters written
*/

int write_percent(va_list args)
{
	static char c = '%';

	(void)args;
		return (write(STDOUT, &c, 1));
}

/**
* write_integer - Prints a signed integer using write()
* @args: List of arguments
*
* Return: Number of characters printed
*/

int write_integer(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	char buffer[12];
	int i = 0, j;
	unsigned int num;

	if (n < 0)
	{
		count += write(STDOUT, "-", 1);
		num = -n;
	}
	else
		num = n;

	if (num == 0)
		return (count + write(STDOUT, "0", 1));

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
		count += write(STDOUT, &buffer[j], 1);

	return (count);
}
