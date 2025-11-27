#include "../main.h"
#include <stdio.h>

int main(void)
{
	int l, l1;
	l = printf("%");
	l1 = _printf("%");

	printf("printf = %d; _printf = %d", l, l1);

	return 0;
}