#include "main.h"

/**
*_isdigit - checks for a digit
*@c: An input
*Return: 1 if it is a digit and 0 if alphabet
*/

int _isdigit(int c)
{
	int i, digit = 0;

	for (i = 0; i <= 9; ++i)
	{
	if (c <= 9)
		digit = 1;
	}
	return (digit);
}

