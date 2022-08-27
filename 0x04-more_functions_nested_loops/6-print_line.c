#include "main.h"

/**
*print_line - a function that draws a straight line in the terminal
*
*@n: number of times a line should be drawn on the terminal
*
*Return: nothing
*/

void print_line(int n)
{
char A = '_';
int i = 0;

for (i = 0; i <= n; i++)
{
if (n > 0)
_putchar(A);
}
_putchar('\n');
}
