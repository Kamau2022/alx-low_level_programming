#include "main.h"
#include <string.h>

/**
*rev_string - a function that reverses a string
*@s: a pointer to the string to be reversed
*Return: nothing
*/

void rev_string(char *s)
{
	int i = 0, j = 0;
	int len = strlen(s);
	char k[100];

	for (i = 0; i < len; i++)
	{
	for (j = 0; i < len; j++, i++)
	{
	if (s[i] == ' ' || s[i] == '.')
	{
	break;
	k[j] = s[i];
	}
	while (j < 0)
	{
	j--;
	s[i - j - 1] = k[j];
	}
}

}

}


