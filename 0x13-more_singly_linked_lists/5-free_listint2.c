#include "lists.h"

/**
*free_listint2 - frees a listint_t list
*@head: pointer to a list to be freed
*Return: nothing
*/

void free_listint2(listint_t **head)
{
listint_t *temp;
if (head)
{
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
}
}
