#include "main.h"

/**
*swap_int - a function that swaps integers.
*@a: pointer that will store value of b.
*@b: pointer that will store the value of a.
*Return: nothing
*/

void swap_int(int *a, int *b)
{
int p;
p = *a;
*a = *b;
*b = p;
}
