#include "main.h"
#include <string.h>

/**
*puts_half - prints half of the string followed by a new line
*@str: the string to print
*
*Return: nothing
*/

void puts_half(char *str)
{
int i, len, k, n;

i = 0;
len = strlen(str);
k = len/2;
n = (len - 1)/2;
for (i = 0; i < 1; i++)
{
for (i = 0; i < k; i++)
{
if (len % 2 == 0)
_putchar(str[k + i]);
}
for (i = 0; i < n; i++)
{
if (len % 2 != 0)
_putchar(str[(n + 1) + i]);
}
_putchar('\n');
}
return;
}
