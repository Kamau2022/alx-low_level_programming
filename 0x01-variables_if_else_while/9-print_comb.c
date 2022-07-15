#include <stdio.h>

/**
*main - check main
*
*Return: Always 0
*/

int main(void)
{

	char c = '0';

	for (c = '0'; c <= '9'; ++c)
	{
	putchar(c);
	if (c != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
