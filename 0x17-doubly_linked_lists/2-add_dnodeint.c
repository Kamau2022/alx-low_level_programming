#include "lists.h"

/**
*add_dnodeint -  a function that adds a new node at
*the beginning of a dlistint_t list
*@head: head of doubly linked list
*@n: data of the doubly linked list
*Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newnode;
newnode = malloc(sizeof(dlistint_t));
newnode->next = (*head);
newnode->prev = NULL;
if ((*head) == NULL)
return (NULL);
newnode->n = n;
(*head)->prev = newnode;
(*head) = newnode;
return (newnode);
}
