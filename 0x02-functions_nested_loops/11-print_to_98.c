#include "main.h"
#include <stdio.h>

/**
*print_to_98 - a function that prints natural numbers
*from n to 98
*@n: an input integer
*Return: nothing
*/

void print_to_98(int n)
{

	while (n < 98 || n > 98)
	{
		while (n >= 98)
		{
		printf("%d, ", n);
		n--;
		}
	printf("%d, ", n);
	++n;
	}
	printf("98\n");
	}
