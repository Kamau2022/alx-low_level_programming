#include "main.h"
#include <string.h>

/**
* _strspn - gets the length of a prefix substring
*@s - an array whose length is determined
*@accept: an array whose bytes are compared with s
*Return: length of s
*/

unsigned int _strspn(char *s, char *accept)
{
int l;
l = strspn(s, accept);
return (l);
}
