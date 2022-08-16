#include "lists.h"
#include <stdio.h>

/**
*print_listint - a function that prints all elements of a list
*@h: a pointer to a list
*Return: number of nodes
*/

size_t print_listint(const listint_t *h)
{
unsigned int nodes = 0;
while (h)
{
if (h->n == 0)
{
printf("(nil)\n");
}
else
{
printf("%d \n", h->n);
}
h = h->next;
nodes++;
}
return (nodes);
}
