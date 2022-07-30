#include "main.h"
#include <string.h>


/**
*print_rev - a function that prints a string in reverse.
*@s: an input character
*Return: nothing
*/

void print_rev(char *s)
{
	int l;

	l = strlen(s) - 1;

	while (l >= 0)
	{
	_putchar(s[l]);
	l--;
	}
	_putchar('\n');
}
