#include "lists.h"

/**
*list_len - returns the number of elements in a linked list
*@h: list to count the elements
*Return: number of elements
*/

size_t list_len(const list_t *h)
{

unsigned int count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
