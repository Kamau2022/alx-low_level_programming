#include "lists.h"

/**
*dlistint_len - a function that returns 
*the number of elements in a linked list
*@h: a pointer to a doubly linked list
*
*Return: number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp;
size_t i = 0;
temp = h;

while (temp != NULL)
{
i++;
temp = temp->next;
}
return (i);
}

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
size_t n = dlistint_len(*head);
dlistint_t *temp, *new, *tail = NULL;
temp = *head;
new = *head;

if (index >= n || *head == NULL)
{
return (-1);
}
while (*head == tail)
{
*head = tail = NULL;
free(*head);
return (1);
}
if (index == 0) 
{
if(temp->next != NULL)
{
*head =(*head)->next;
free((*head)->prev);
(*head)->prev = NULL;
return (1);
}
else
*head = NULL;
return (1);
}
/*if (((*head) == NULL) || (index > (n + 1)) || head == NULL)
{
return (-1);
}*/
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
return(1);
}
return(-1);
}
