#include <stdio.h>
#include "../main.h"

int main()
{
	int l, l1;

	l = _printf("Hello World !\n");
	l1 = printf("Hello World !\n");

	printf("printf = %d; _printf = %d", l, l1);

	return 0;
}