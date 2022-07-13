#include "main.h"
#include <string.h>

/**
*_strcat - a function that concatenate strings
*@dest: a character input
*@src: a character input
*Return: a pointer
*/

char *_strcat(char *dest, char *src)
{
	char *k = dest;
	char *c = src;

	strcat(k, c);

	return (k);
}
