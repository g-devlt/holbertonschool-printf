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
	char bin_digits[32];
	int count = 0, i = 0;

	num = va_arg(args, unsigned int);
	
    if (num == 0)
    {
        _putchar('0');
        return 1;
    }

    while(num)
    {
        bin_digits[count++] = (num % 2) + '0';
        num >>= 1;
    }

    for(i = count - 1; i >= 0; --i)
    {
        _putchar(bin_digits[i]);
    }

	return count;
}