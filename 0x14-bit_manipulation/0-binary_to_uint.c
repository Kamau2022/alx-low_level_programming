#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*binary_to_uint - converts binary number to a unsigned int
*@b: string to be converted to unsigned int
*Return: converted number or 0
*/

unsigned int binary_to_uint(const char *b)
{
unsigned int k = 0;
unsigned int j = 1;
int i = 0;
unsigned int len;
len = strlen(b);

if (b == NULL)
return (0);
for (i = len - 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
	return (0);

if (b[i] == '1')
{
	k = k + j;
}
	j = j * 2;
}
return (k);
}
