#include "main.h"

/**
*_isupper - This function checks for uppercase character
*@c: An input character
*Return: 1 if upper and 0 otherwise
*/

int _isupper(int c)
{

	int upper;
	int j = 'A';

	if (c >= j  && c <= 'Z')
	{
		upper = 1;
	}
	else
	{
		upper = 0;
	}

	return (upper);
}
