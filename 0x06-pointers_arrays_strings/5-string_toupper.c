#include "main.h"

/**
*string_toupper - a function that changes lowercase
*letters to uppercase
*@k: an input string
*Return: a character
*/

char *string_toupper(char *k)
{

	char *s = k;
	int i = 0;

	while (s[i] != '\0')
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	s[i] = s[i] - 32;
	}
	i++;
	}
	return (s);
}
