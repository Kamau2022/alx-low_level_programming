#include "main.h"
#include <string.h>

/**
*_strpbrk - searches a string for any of a set of bytes
*@s: string to search
*@accept: bytes to search for
*Return: a pointer to the byte in s that matches one of
*the bytes in accept or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
int i;
int j;
int l = strlen(accept);
int k = strlen(s);

for (j = 0; j <= k; j++)
{
for (i = 0; i <= l; ++i)
{
if (*s == accept[i])
return (s);
}
s++;
}
return (NULL);
}
