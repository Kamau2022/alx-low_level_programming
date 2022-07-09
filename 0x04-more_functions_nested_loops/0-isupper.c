#include "main.h"

/**
*_isupper - This function checks for uppercase character
*@c: An input character
*Return: 1 if upper and 0 if lower
*/

int _isupper(int c)
{

	int upper;

	if (c >= 'a' && c <= 'z')
	{
		upper = 0;
	}
	else if (c >= 'A' && c <= 'z')
	{
		upper = 1;
	}
	else if (c <0 && c >= 0)
		upper = 0;
	else
	{
		upper = 0;
	}

	return (upper);
}
