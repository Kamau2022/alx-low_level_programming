#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
*create_array - a function that creates an array of characters
*@size: the size of an array
*@c: an input character
*Return: a character
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	i = 0;
	char *k = c;

	while (i < size)
	{
	if (size == 0)
	{
	return (NULL);
	}
	if (*k != 0)
	{
	_putchar(k[i]);
	++i;
	}
	if (*k == 0)
	{
	break;
	}
	return (k);
	}
	return (NULL);
	}
	
