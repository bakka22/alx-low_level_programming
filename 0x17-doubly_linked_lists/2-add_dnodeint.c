#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_dnodeint - add a new list node at head
*@head :the head of the node
*@n :intger on the node
*Return: a pointer to the head of the list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (new->next)
		new->next->prev = new;
	*head = new;
	return (new);
}
