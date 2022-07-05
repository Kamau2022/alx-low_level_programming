#include "main.h"

/**
*main - Entry point
*
*Descrption: 'This program prints alphabet in lowercase'
*
*Return: Always 0 (Success)
*/

int main(void)
{
print_alphabet();
char c;
for (c = 'a'; c <= 'z'; ++c)
_putchar(c);
_putchar('\n');
return(0);
}
