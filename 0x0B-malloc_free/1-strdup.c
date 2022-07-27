#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
*_strdup - a function that returns a pointer to a newly
*allocated space in memory containing a copy of a string
*given as a parameter
*@str: an input string
*Return: returns a pointer to the duplicated string
*/

char *_strdup(char *str)
{
	char *k;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i])
	{
	++i;
	k = malloc(sizeof(char) * (i + 1));
	}
	if (k == NULL)
	{
		return (NULL);
	}
	while (str[j])
	{
	k[j] = str[j];
	j++;
	}
	k[j + 1] = 0;
	return (k);
}
