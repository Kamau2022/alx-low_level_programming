#include "lists.h"
#include "stdio.h"

/**
*print_dlistint -  a function that prints
*all the elements of a dlistint_t list.
*@h: a pointer to a list
*
*Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
size_t nodes = 0;
const dlistint_t *temp;

temp = h;
while (temp)
{
printf("%d\n", temp->n);
temp = temp->next;
nodes++;
}
return (nodes);
}
