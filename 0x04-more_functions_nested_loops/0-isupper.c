#include "main.h"

/**
*_isupper - This function checks for uppercase character
*@c: An input character
*Return: 1 if upper and 0 if lower
*/

int _isupper(int c)
{
	int i;

	int upper = 0;

	for (i = 'A'; i <= 'Z'; ++i)
	{
		if (c <= 'Z')
		upper = 1;
	}

	return (upper);
}
