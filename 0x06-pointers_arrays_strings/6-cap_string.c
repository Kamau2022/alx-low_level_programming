#include "main.h"

/**
*cap_string - capitalizes all words of a string
*@str: letters to capitalize
*Return: capitalized letter
*/

char *cap_string(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
if (i == 0 &&  (str[i] >= 'a' && str[i] <= 'z'))
{
str[i] = str[i] - 32;
continue;
}
while (str[i] == ' ' || str[i] == '\t' || str[i] == '.' || str[i] == '\n')
{
++i;
if (str[i] >= 'a' && str[i] <= 'z')
str[i] = str[i] - 32;
continue;
}
}
return (str);
}
