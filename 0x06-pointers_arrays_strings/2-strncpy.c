#include "main.h"
#include <string.h>

/**
*_strncpy - a function that copies a string
*@dest: a destination string
*@src: a source string
*Return: a character value
*/

char *_strncpy(char *dest, char *src, int n)
{
	char *k = dest;
	char *c = src;
	int i = 0;

	while (i <= n)
	{
	++i;
	if (i == n)
	{
	break;
	}
	strncpy(k, c, n);
	}
	return (k);
}
