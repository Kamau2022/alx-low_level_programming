#include "lists.h"

/**
*sum_dlistint - a function that returns the sum
*of all the data (n) of a dlistint_t linked list.
*@head: a head to a doubly linked list
*Return: sum or 0
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp;

temp = head;

if (head == NULL)
{
return (0);
}
while (temp != NULL)
{
sum = sum + temp->n;
temp = temp->next;
}
return (sum);
}
