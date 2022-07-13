#include "main.h"
#include <string.h>

/**
*_strcmp - a function that compares two strings
*@s1: an input string
*@s2: an input string
*Return: an integer
*/

int _strcmp(char *s1, char *s2)
{
	char *k = s1;
	char *c = s2;
	int result;

	result = strcmp(k, c);
	return (result);
}
