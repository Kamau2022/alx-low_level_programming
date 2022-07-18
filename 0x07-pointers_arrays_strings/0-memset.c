#include "main.h"
#include <string.h>

/**
*_memset - a function that fills memory with 
*a constant byte
*@s: address of the memory to print
*@b: value to be set
*@n: size of memory to print
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;
	char k = 'b';
	int i = 0;
	
	for (i = 0; i <= n; ++i)
	{
	if (i == n)
	{
	break;
	}
	_memset(c, k, n);
	}
	return (c);
}

