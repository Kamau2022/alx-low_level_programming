#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_numbers - a function that prints numbers
*@separator: string to be printed between numbers
*@n: number of argurments
*Return: nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
const char *c = separator;
unsigned int i = 0;
va_start(arg, n);

for (i = 0; i < n; ++i)
{
int x = va_arg(arg, int);
printf("%d", x);
if (c != NULL && i < n - 1)
printf("%s", c);
}
printf("\n");
}
