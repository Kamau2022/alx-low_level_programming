#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - a function that prints strings
*@separator: string printed between strings
*@n: number of arguments
*Return: nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list arg;
const char *c = separator;
unsigned int i = 0;
va_start(arg, n);

for (i = 0; i < n; ++i)
{
char *s = va_arg(arg, char *);
if (s != NULL)
printf("%s", s);
else
printf("(nil)");
if (c != NULL && i < n - 1)
printf("%s", c);
}
printf("\n");
}
