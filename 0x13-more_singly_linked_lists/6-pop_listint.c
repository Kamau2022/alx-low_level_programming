#include "lists.h"

/**
*pop_listint - deletes headnode of a linked list
*@head: a pointer to a linked list
*Return: head's node data or 0
*/

int pop_listint(listint_t **head)
{
listint_t *temp;
int k = (*head)->n;
if (head == NULL)
{
return (0);
}
else
{
temp = *head;
*head = (*head)->next;
free(temp);
}
return (k);
}
