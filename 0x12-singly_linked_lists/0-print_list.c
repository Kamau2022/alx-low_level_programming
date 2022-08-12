#include "lists.h"
#include <stdio.h>

/**
*print_list - a function that prints elements of a linked list
*@h:list to print
*Return: number of nodes
*/

size_t print_list(const list_t *h)
{
unsigned int nodes = 0;

while (h)
{
	if (h->str == NULL)
	{
	printf("[0] (nil)\n");
	}
	else
	{
	printf("[%i] %s\n", h->len, h->str);
	}

		h = h->next;
		nodes++;
	}
	return (nodes);
	}
