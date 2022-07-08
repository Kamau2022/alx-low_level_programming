#include "main.h"

/**
*print_most_numbers - a function that prints most numbers
*followed by a new line.
*Return Always 0
*/

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; ++i)
	{
	if (i == 2 || i == 4)
	{
	continue;
	}
		_putchar('0' + i);
	}
		_putchar('\n');
}
