#include "get_func.h"
#include "main.h"

static format_t handlers[] = {
	{'c', &write_char},
	{'s', &write_string},
	{'%', &write_percent},
	{NULL, NULL}
};

func_t get_function(char format)
{
	int i = 0;
	while(handlers[i]->name)
	{
		if(handlers[i]->name == format)
		{
			return handlers[i]->handler;
		}
	}
	return NULL;
}