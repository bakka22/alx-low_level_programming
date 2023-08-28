#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_nodeint_end - add a new list node at head
*@head :the head of the node
*@n :string on the node
*Return: a pointer to the head of the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp;

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
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
		tmp->next = new;
	return (new);
}
