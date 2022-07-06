#include "main.h"

/**
_isalpha - Entry point
@c: An input character
Description: The program checks for alphabetic character
Return: 1 if c is a letter or 0 if a digit
*/

int _isalpha(int c)
{
char i, j;
int alpha = 0;
for (i = 'a'; i <= 'z'; ++i)
{
if (i == c)
alpha = 1;
}
for (j = 'A'; j <= 'Z'; ++j)
{
if (j == c)
alpha = 1;
}
return (alpha);
}

