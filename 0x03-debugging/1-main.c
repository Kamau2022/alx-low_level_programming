#include <stdio.h>
/**
*main - causes an infinite loop
*Return: 0
*/

int main(void)
{
int i;
printf("infinite loop incoming :(\n");
i = 0;
while (i < 10) /*causes the output to go into an infinite loop*/
{
putchar(i);
}
printf("infinite loop avoided! \\o/n\n");
return (0);
}
