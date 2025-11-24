#include "main.h"
#include <unistd.h>

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

/**
* write_decimal - Prints a decimal.
* @args: va_list contaning the decimal to print.
*
*/

int write_decimal(va_list args)
{
	char d = va_arg(args, int);
	return (write(1, d, 1));
}

/**
* write_integral - Prints an integral.
* @args: va_list containing the integral to print.
* Return: 
*/

int write_integral(va_list args)
{
	   int count = 0;
	char buffer[12]; /* Enough for -2147483648 and \0 */
	int i = 0, j;
	unsigned int num;

	if (n < 0)
	{
		count += write(1, "-", 1);
		num = -n;
	}
	else
		num = n;

	if (num == 0)
		return count + write(1, "0", 1);

	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (j = i - 1; j >= 0; j--)
		count += write(1, &buffer[j], 1);

	return count;
}