#include "main.h"

/*more_numbers - a function that prints numbers
*followed by a new line.
Return type: Always 0
*/

void more_numbers(void)
{
	int i = 0, j;
	
	while (i <= 9)
	{
		j = 0;
	while (j <= 14)
	{
		_putchar(j/10 + '0');
		_putchar(j%10 + '0');
		++j;
	}
		_putchar('\n');
		i++;
}
}


