#include "main.h"
#include <stdio.h>

/**
*print_array - a function that prints an array of integers
*@a: a variable
*@n: number of elements of array to be printed
Return: nothing
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; ++i)
	{
	printf("%d", a[i]);
	if (i < n-1)
	printf(", ");
	}
	{
	printf("\n");
	}
}
