#include "lists.h"

/**
*delete_nodeint_at_index - deletes a node at index of linked list
*@head: head node
*@index: index of node to be deleted
*Return: 1 or -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *nextnode;
unsigned int i = 1;
if (head == NULL)
{
return (-1);
}
temp = *head;
if (index == 0)
{
*head = (*head)->next;
free(temp);
return (1);
}
temp = *head;
if (*head == NULL)
{
free(temp);
return (1);
}
temp = *head;
while (i < index - 1)
{
temp = temp->next;
i++;
}
nextnode = temp->next;
temp->next = nextnode->next;
free(nextnode);
return (1);
}
