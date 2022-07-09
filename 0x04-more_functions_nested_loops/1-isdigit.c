#include "main.h"

/**
*_isdigit - checks for a digit
*@c: An input
*Return: 1 if it is a digit and 0 if alphabet
*/

int _isdigit(int c)
{
	int digit;

	if (c >= '0' && c <= '9')
	{
		digit = 1;
	}
	else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		digit = 0;
	}
	return (digit);
}

