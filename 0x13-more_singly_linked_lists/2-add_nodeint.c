#include "lists.h"


/**
*add_nodeint - adds a node at the end of a list
*@head: a pointer to a list
*@n: an integer to be added
*Return: address of new element or null
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (new);
}
