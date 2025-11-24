#include "main.h"
#include <unistd.h>

/**
* write_char - 
* @c: 
* Return:
*/

int write_char(char c)
{
	return write(1, &c, 1);
}
