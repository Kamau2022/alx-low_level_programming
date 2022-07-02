#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("The number is positive\n");
}
else if (n < 0)
{
printf("The number is negative\n");
}
else
{
printf("The number is zero\n");
}
return (0);
}
