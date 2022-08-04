#include "variadic_functions.h"
#include <stdarg.h>

/**
*sum_them_all - a function that return sum of its parameters
*@n: number of arguments
*Return: 0 or sum of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
va_list arg;
int sum;
unsigned int i;
va_start(arg, n);
sum = 0;
i = 0;
if (n == 0)
{
return (0);
}
while (i < n)
{
int x = va_arg(arg, int);
sum = sum + x;
++i;
}
return (sum);
va_end(arg);
}
