#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
*_strlen - returns the length of a string
*@s: string
*Return: length of the string
*/

list_t *add_note(list_t **head, const char *str)
{
list_t *new;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->next = *head;
*head = new;
return (new);
}
