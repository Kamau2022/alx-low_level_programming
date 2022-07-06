#include "main.h"

/**
*int _islower 'Checks whether an alphabet is lower case'
*Return: 1 if it is lower case or o if it is upper case
*/

int _islower(int c)
{
char h;
int lower =0;
for (h = 'a'; h <= 'z'; ++h)
{
if (h == c)
lower = 1;
}
return (lower);
}
