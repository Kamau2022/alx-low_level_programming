#include "main.h"
#include <stdio.h>

/**
*fizz_buzz - prints numbers from 1 to 100
*for multiples of 3 it prints Fizz
*for multiples 0f 5 it prints Buzz
*for multiples 3 and 5 prints FizzBuzz
*
*Return: nothing
*/

int main(void)
{
int i;

for ( i = 1; i <= 100; i++)
{
if (i % 3 == 0)
printf("Fizz ");
else if (i % 5 == 0)
printf("Buzz ");
else if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");
else
printf("%d ", i);
}
printf("\n");
return (0);
}
