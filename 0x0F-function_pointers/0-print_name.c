#include "function_pointers.h"
#include <string.h>

void print_name(char *name, void(*f)(char*))
{
	int i, l;
	i = 0;
	l = strlen(name);
	

	for (i = 0; i < l; ++i)
	{
		_putchar(name[i]);

	}
		_putchar('\n');
}	
