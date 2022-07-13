#include "main.h"
#include <string.h>
#define DEST_SIZE 100

/**
*_strncat - a function that concatenate strings
*@dest: a character input
*@src: a character input
*@n: an integer input
*Return: a pointer
*/

char *_strncat(char *dest, char *src, int n)
{
	char *k = dest;
	char *c = src;
	int i = 0;

	while (i == n)
	{
	i++;
	}
	{
	strncat(k, c, n);
	}
	return (k);
}

