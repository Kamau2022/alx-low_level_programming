#include "lists.h"
#include <stdio.h>

/**
*print_listint - a function that prints all elements of a list
*@h: a pointer to a list
*Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
printf("%i \n", h->n);
h = h->next;
nodes++;
}
return (nodes);
}
