#include "lists.h"

/**
*add_nodeint_end - adds a node at the end of a linked list
*@head: a pointer to a list
*@n: an integer to be added
*Return: address or null
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *temp;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->next = NULL;
new->n = n;

if (*head == NULL)
{
*head = new;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new;
}
return (new);
}
