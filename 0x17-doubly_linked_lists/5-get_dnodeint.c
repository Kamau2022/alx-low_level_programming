#include "lists.h"

/**
*dlistint_len -  a function that returns the 
*number of elements in a linked list
*@h: a pointer to a doubly linked list
*Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp = h;
size_t i = 0;

while (temp)
{
++i;
temp = temp->next;
}
return (i);
}

/**
*get_dnodeint_at_index - a function that returns the 
*nth node of a doubly linked list
*@head: a pointer to a doubly linked list
*@index: is the index of the node
*Return: Null or the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
size_t n = dlistint_len(head);
unsigned i;

if (index >= n || head == NULL)
return (NULL);
else if (index < n)
{}
for (i = 0; i < index; i++)
{
temp = temp->next;
}
return (temp);
}








