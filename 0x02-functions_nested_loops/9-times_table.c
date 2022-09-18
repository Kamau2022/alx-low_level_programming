#include "main.h"
#include <stdio.h>


/**
*times_table - prints the 9 times table starting with 0
*
*Return: nothing
*/

void times_table(void)
{
	int n, j, p, s, i;

	for (i = 0; i < 10; i++)
	{
		printf("0,  ");
		s = 0 + i;

		for (j = 1; j < 9; j++)
		{
			n = s * j;
			if (n + i >= 10)
			{
			printf("%d, ", n);
			}
			else if (n <= 9)
			{
				printf("%d,  ", n);
			}
		}
		p = 9 * i;
		printf("%d", p);
		printf("\n");
	}
	}

