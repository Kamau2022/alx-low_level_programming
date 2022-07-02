#include<stdlib.h>
#include<time.h>
#include<stdio.h>

/**
* main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
int n, digit;
srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
{
printf("last digit of % d is % d and is greater than 5\n", n,  digit);
}
else if (digit < 6 && digit < 0)
{
printf("last digit of % d is % d and is less than 6 and not zero\n", n,  digit);
}
else
{
printf("last digit of %d is % d and is zero\n", n,  digit);
}
return (0);
}
