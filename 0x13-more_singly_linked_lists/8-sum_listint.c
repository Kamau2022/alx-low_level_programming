#include "lists.h"

/**
*sum_listint - returns the sum of all the data in a linked list
*@head: a pointer to a list
*Return: sum or 0
*/

int sum_listint(listint_t *head)
{
int sum = 0;
if (head == NULL)
{
	return (0);
}
while (head)
{
	sum = sum + head->n;
	head = head->next;
}
return (sum);
}
