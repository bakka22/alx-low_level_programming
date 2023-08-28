#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*add_node - add a new list node at head
*@head :the head of the node
*@n :intger on the node
*Return: a pointer to the head of the list
*/
listint_t *add_node(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
