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
	char k;
	k = 'b';

	_memset(c, k, n);
	
	return (c);
}

