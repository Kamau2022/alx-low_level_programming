#include "main.h"
#include <stdio.h>

/**
*reverse_array - a function that reverses content
*of an array of integers
*@a: an array of integers
*@n: number of elements
*Return: nothing
*/

void reverse_arrray(int *a, int n)
{

	int *s = a;
	int i;


	for (i = 1; i <= n; ++i)
	{
	_putchar(s[n - i]);
	}
}
