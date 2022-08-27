#include "main.h"

/**
*print_square - a function that prints a square
*
*@size: size of the square
*
*Return: nothing
*/

void print_square(int size)
{
char c = '#';
int i = 0;
int j = 0;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if (size <= 0)
_putchar('\n');
else
_putchar(c);
}
_putchar('\n');
}
return;
}
