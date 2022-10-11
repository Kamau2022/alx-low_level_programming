#include "lists.h"

/**
*dlistint_len - a function that returns
*the number of elements in a linked list
*@h: a pointer to a doubly linked list
*
*Return: number of elements in a linked list
*/

size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *temp;
size_t i = 0;
temp = h;
while (temp != NULL)
{
i++;
temp = temp->next;
}
return (i);
}

/**
*get_dnodeint_at_index - a function that returns the
*nth node of a doubly linked list
*@head: a pointer to a doubly linked list
*@index: is the index of the node
*Return: Null or the nth node
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *temp = head;
unsigned int i;
for (i = 0; i < index; i++)
{
temp = temp->next;
}
return (temp);
}

/**
*insert_dnodeint_at_index -  a function that inserts
*a new node at a given position
*@h: a pointer to the head node of a doubly linked list
*@idx: the index of the list where the new node should be added
*@n: data to input in the node
*Return: the address of the new node, or NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
size_t length = dlistint_len(*h);
dlistint_t *tail = get_dnodeint_at_index(*h, length - 1);
dlistint_t *temp = *h, *new, *next_node = *h;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
if (idx > length)
{
free(new);
return (NULL);
}
if (idx == 0 && *h != NULL)
{
new->prev = NULL;
new->next = (*h);
(*h)->prev = new;
*h = new;
new->n = n;
}
if (idx == length)
{
new->next = NULL;
new->prev = tail;
tail->next = new;
new->n = n;
}
if (idx > 0 && idx < length)
{
next_node = temp->next;
for (i = 1; i < idx; i++)
{
next_node = next_node->next;
temp = temp->next;
}
temp->next = new;
new->prev = temp;
new->next = next_node;
next_node->prev = new;
new->n = n;
}
return (new);
}
