#include "lists.h"

/**
*add_dnodeint_end - a function that adds a new node
*at the end of a dlistint_t list.
*@head: a pointer to a doubly linked list
*@n: data in a node
*Return:the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new, *temp;
temp = *head;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
if (*head == NULL)
{
*head = new;
new->n = n;
new->prev = NULL;
new->next = NULL;
}
else if (*head != NULL)
{
while (temp->next != NULL)
{
temp = temp->next;
}
new->n = n;
temp->next = new;
new->prev = temp;
new->next = NULL;
}
temp = new;
return (new);
}
