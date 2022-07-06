#include "main.h"

/**
*_islower -> This function checks whether an alphabet is lower case
*@c: An input character
*Description: checks whether alphabet is lower case
*Return: 1 if is lower case or 0 if it is uppercase
*/

int _islower(int c)
{
char h;
int lower = 0;
for (h = 'a'; h <= 'z'; ++h)
{
if (h == c)
lower = 1;
}
return (lower);
}
