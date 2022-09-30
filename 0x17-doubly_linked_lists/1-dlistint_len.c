#include "lists.h"
/**
*dlistint_len - a function that returns the
*number of elements in a linked dlistint_t list.
*@h: a pointer to a doubly linked list
*
*Return: number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
unsigned int nodes = 0;
const dlistint_t *temp;

temp = h;
while (temp != NULL)
{
temp = temp->next;
nodes++;
}
return (nodes);
}
