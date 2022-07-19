#include "main.h"

/**
*_memcpy - a function that copies n bytes of memory
*from source to the destiny
*@dest: a destination string
*@src: a source string
*@n: an input integer
*Return: a pointer to destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	for (i = 0; i < n; ++i)
	{
		dest[i] = src[i];
	}
	return (dest);
}

