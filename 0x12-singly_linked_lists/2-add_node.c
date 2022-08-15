#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
*_strlen - returns the length of a string
*@str: string
*Return: length of the string
*/
unsigned int _strlen(char *str)
{
unsigned int i;
for(i = 0; str[i]; i++)
;
return(i);
}
/**
*add_note - adds a node at the beginning
*@head: pointer to a list
*@str: string to add to new node
*Return: pointer to the new node
*/

list_t *add_note(list_t **head, const char *str)
{
list_t *new;
if (str == NULL)
return (NULL);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);
new->len = _strlen(new->str);
new->next = *head;
*head = new;
}
return (new);
}
