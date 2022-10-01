#include "lists.h"

/**
*add_dnodeint -  a function that adds a new node at
*the beginning of a dlistint_t list
*@head: a pointer to the head of doubly linked list
*@n: data of the doubly linked list
*Return: the address of the new element, or NULL if it failed
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->n = n;
new->next = *head;
new->prev = NULL;
if (*head != NULL)
{
(*head)->prev = new;
}
*head = new;
return (new);
}
