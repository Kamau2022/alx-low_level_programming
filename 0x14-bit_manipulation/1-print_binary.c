#include "main.h"

/**
*print_binary - prints binary representation of a number
*@n: integer to be converted to binary
*Return: nothing
*/

void print_binary(unsigned long int n)
{
unsigned int i = 1;
if (n > 1)
print_binary(n / 2);
(n & i) ? _putchar('1') : _putchar('0');
}
