#include "main.h"
#include <stdio.h>

/**
*main - check the code
*
*Return: always 0
*/

int main(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if ((i % 3 == 0) && (i % 15 != 0))
printf("Fizz ");
else if ((i % 5 == 0) && (i % 15 != 0))
printf("Buzz ");
else if ((i % 3 == 0) && (i % 5 == 0))
printf("FizzBuzz ");
else
printf("%d ", i);
}
printf("\b\b");
printf("\n");
return (0);
}
