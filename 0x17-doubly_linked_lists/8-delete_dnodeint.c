#include "lists.h"

/**
*delete_dnodeint_at_index -  a function that deletes the node
*at index index of a dlistint_t linked list
*@head: a pointer to the head node of a doubly linked list
*@index: the index of the node that should be deleted
*
*Return: 1 if it succeeded, -1 if it failed
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int i;
dlistint_t *temp, *new;

temp = *head;
new = *head;
if (index == 0 && temp->next != NULL)
{
*head =(*head)->next;
free(temp);
(*head)->prev = NULL;
}
if (temp->next == NULL && temp->prev == NULL)
{
free(temp);
return(1);
}
else if (*head == NULL)
{
return(-1);
}
else if (index > 0)
{
new = temp->next;
for (i = 1; i < index; i++)
{
if (new->next != NULL)
{
new = new->next;
temp = temp->next;
continue;
}
temp->next = NULL;
free(new);
return(1);
}
temp->next = new->next;
free(new);
new->prev = temp;
}
return(1);
}

















