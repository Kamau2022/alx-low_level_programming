#include "main.h"
#include <string.h>

/**
* _strspn - gets the length of a prefix substring
*@s:segment to return bytes from
*@accept: the bytes to include
*Return:number of bytes in the initial segment of s
*which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
int l;

l = strspn(s, accept);
return (l);
}
