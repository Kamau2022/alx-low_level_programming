#include "main.h"

/**
*reverse_array - a function that reverses content
*of an array of integers
*@a: an array of integers
*@n: number of elements
*Return: nothing
*/

void reverse_array(int *a, int n)
{

	int i = 0;
	int c;

	while (i < n--)
	{
		c = a[i];
		a[i++] = a[n];
		a[n] = c;
	}
}
