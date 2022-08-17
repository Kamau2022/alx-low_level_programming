#include "lists.h"
#include <stdlib.h>

/**
*find_length - finds length of a linked list
*@head: head node
*Return: number of elements
*/

int find_length(listint_t **head)
{
size_t count;
count = 0;
while (head != NULL)
{
*head = (*head)->next;
count++;
}
return (count);
}

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

if (head == NULL)
{
return (NULL);
}
else
{
temp = *head;
while (i < idx)
{
temp = temp->next;
i++;
}
newnode = malloc(sizeof(listint_t));
newnode->n = n;
newnode->next = temp->next;
temp->next = newnode;
}
return (newnode);
}















