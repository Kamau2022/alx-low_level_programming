#include "main.h"
#include <string.h>

/**
*rev_string - a function that reverses a string
*@s: a pointer to the string to be reversed
*Return: nothing
*/

void rev_string(char *s)
{
	int len = 0, i = 0;
	char c;

	while (s[len] != '\0')
	{
	len++;
	}
	while (i < len--)
	{
		c = s[i];
		s[i++] = s[len];
		s[len] = c;
	}
}
