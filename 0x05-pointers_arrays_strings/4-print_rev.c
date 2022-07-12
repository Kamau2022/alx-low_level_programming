#include "main.h"
#include <string.h>

/**
*print_rev - a function that prints a string in reverse.
*@s: an input character
*Return: nothing
*/

void print_rev(char *s)
{
	char *len = s;

	while (*len)
	{
	
		len++;
	len -= 1;
	}
	
	while (len)
	{
	
		_putchar(*s);
		len--;
	}
	{
	_putchar('\n');
	}

}
