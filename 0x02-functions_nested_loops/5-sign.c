#include "main.h"

/**
*print_sign - a function that prints the sign of a number.
*@n: an integer input
*Return: 1 if positive -1 if negative and 0 if zero.
*/

int print_sign(int n)
{
	int k = 0, sign;

	if (n > k)
	{
		_putchar('+');
		sign = 1;
	}

	else if (n < k)
	{	_putchar('-');
		sign = -1;
	}

	else if (n == k)
	{
		_putchar('0');
		sign = 0;
	}
	return (sign);
}


