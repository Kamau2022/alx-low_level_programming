#include "lists.h"

/**
*_strlen - finds the length of a string
*@str: string to find the length of
*Return: length of string
*/

unsigned int _strlen(const char *str)
{
unsigned int i;
for (i = 0; str[i]; i++)
;
return (i);
}

/**
*add_node_end - adds a node at the end
*@head: pointer to a list
*@str: string to add to new node
*Return: pointer to the new node
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new;
list_t *temp;
int length = _strlen(str);
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
new->str = strdup(str);
new->next = NULL;

if (*head == NULL)
*head = new;
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
new->len = length;

return (new);
}
