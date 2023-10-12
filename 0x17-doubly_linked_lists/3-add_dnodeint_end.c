#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_dnodeint_end - add a new list node at head
*@head :the head of the node
*@n :string on the node
*Return: a pointer to the head of the list
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp;

	tmp = *head;
	if (tmp != NULL)
	{
		while (1)
		{
			if (tmp->next == NULL)
			{
				break;
			}
			tmp = tmp->next;
		}
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
