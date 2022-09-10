#include "main.h"
#include <string.h>

/**
*_strcpy - copies a string pointed by src including
*null terminating byte to buffer pointed by dest
*@dest: pointer to the destination array where content is to be copied
*@src: string which will be copied
*Return: pointer to dest
*/


char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; i <= '\0'; i++)
{
strcpy(dest, src);
src++;
}
return (dest);
}
