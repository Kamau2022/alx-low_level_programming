#include "main.h"
#include <string.h>


/**
*print_rev - a function that prints a string in reverse.
*@s: an input character
*Return: nothing
*/

void print_rev(char *s)
{
	int l, i;
	char *begin, *end, ch;
	l = strlen (s);
	begin = s;
	end = s;

	for (i = 0; i < l - 1; i++)
		end++;
	for (i = 0; i < l / 2; i++)
	{
		ch = *end;
		*end = *begin;
		*begin = ch;
		begin++;
		end--;
	}
}
