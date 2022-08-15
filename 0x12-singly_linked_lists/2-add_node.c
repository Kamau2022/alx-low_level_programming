#include "lists.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
*add_node - adds a node at the beginning of a list
*@head: head of a node 
*@str: string to be added
*Return: address or NULL
*/

list_t *add_note(list_t **head, const char *str)
{
list_t *new;
int length = 0;
new = (list_t*)malloc(sizeof(list_t));
if (new == NULL)
{
return (NULL);
}
while (str[length])
{
length++;
new->len = length;
new->str = strdup(str);
new->next = *head;
*head = new;
}
return (new);
}
