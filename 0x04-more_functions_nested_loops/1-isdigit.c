#include "main.h"

/**
*_isdigit - checks for a digit
*@c: An input
*Return: 1 if a digit and 0 otherwise
*/

int _isdigit(int c)
{
	int digit, k = 0;
	char j = 32;
	char m = 58;

	if (c >= k && c <= '9')
	{
		digit = 1;
	}
	else if ((c >= j && c <= 47) || (c >= m && c <= 126))
	{
		digit = 0;
	}
	else
	{
		digit = 0;
	}
	return (digit);
}

