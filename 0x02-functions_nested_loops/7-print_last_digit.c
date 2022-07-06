#include "main.h"

/**
*print_last_digit - Entry point
*@n: An integer a
*Description: This function prints the last digit of a number
*Return: value of the last digit
*/

int print_last_digit(int n)
{
int r;
if (n < 0)
r = -1 * (n % 10);
else
r = n % 10;
_putchar((r % 10) + '0');
return (r % 10);
}
