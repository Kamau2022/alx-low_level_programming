#include "main.h"

/**
*print_binary - prints binary representation of a number
*@n: integer to be converted to binary
*Return: nothing
*/

void print_binary(unsigned long int n)
{
int c = 0;
int bit = sizeof(n) * 8 - 1;
if (n == 0)
_putchar('0');
while (bit >= 0)
{
if (n >> bit & 1)
{
_putchar('1');
c++;
}
else if (c)
_putchar('0');
bit--;
}
}
