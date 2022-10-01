#include "lists.h"

/**
*sum_dlistint - a function that returns the sum 
*of all the data (n) of a dlistint_t linked list.
*@head: a head to a doubly linked list
*Return: nothing
*/

int sum_dlistint(dlistint_t *head)
{
int sum = 0;
int k;
dlistint_t *temp;
temp = head;

if (head == NULL)
{
return (0);
}
while (temp != NULL)
{
k = temp->next;
sum = sum + k;
temp = temp->next;
}
return (sum);
}
