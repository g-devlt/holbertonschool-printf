#include "main.h"

/**
* write_bin - Prints an unsigned int as its binary form
* @args : List of argument
* 
* Return: Number of printed characters
*/

int write_bin(va_list args)
{
	unsigned int num;
	char bin_digit = 0;
	int count = 0;

	num = va_arg(args, unsigned int);
	while (num)
	{
		bin_digit = num % 2; /* Get least significant (right most) binary digit */
		bin_digit += '0';
		_putchar(bin_digit);
		num >>= 1;
		++count;
	}

	return count;
}