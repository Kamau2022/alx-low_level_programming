#include "lists.h"
#include <stdlib.h>

/**
*insert_nodeint_at_index - inserts a new node at a given position
*@head: head node
*@idx: index of the list to add the new node
*@n: data to insert into the new node
*Return: address of new node or null
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *newnode;
listint_t *temp;
unsigned int i = 0;
newnode = malloc(sizeof(listint_t));
if (head == NULL)
{
return (NULL);
}
if (newnode == NULL)
{
return (NULL);
}
if (idx == 0)
{
newnode->next = *head;
newnode->n = n;
*head = newnode;
return (newnode);
}
if (*head == NULL)
{
*head = newnode;
newnode->n = n;
newnode->next = NULL;
return (newnode);
}
while (i < idx)
{
temp = *head;
temp = temp->next;
i++;
}
newnode->n = n;
newnode->next = temp->next;
temp->next = newnode;
return (newnode);
}
