#include "main.h"
#include <stdio.h>

/**
*_strchr - a function that locates a character in a string
*@s: an input string
*@c: a character to be located
*Return: a pointer when a character occurs
*/

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		++s;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
