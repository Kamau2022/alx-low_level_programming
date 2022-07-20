#include "main.h"

/**
*factorial - a function that gives factorial of a number
*@n: an input integer
*Return: a factorial of a given number
*/

int factorial(int n)
{

	if (n > 0)
	{
	return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
	return (1);
	}
	else
	{
	return (-1);
	}
	}
