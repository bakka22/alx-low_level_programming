#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*dlistint_len2 - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t dlistint_len2(const dlistint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
*insert_dnodeint_at_index - get the indexed node
*@head : the head of the list
*@idx : index
*@n : data of new node
*Return: return the nth node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **head,
unsigned int idx, int n)
{
	dlistint_t *new, *tmp, *rep;

	if (head == NULL)
		return (NULL);
	if (idx > (unsigned int)(dlistint_len2(*head)))
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	rep = *head;
	if (idx == 0)
	{
		if (*head != NULL)
		{
			tmp = *head;
			*head = new;
			new->next = tmp;
			new->prev = NULL;
			tmp->prev = new;
		}
		else
		{
			*head = new;
			new->prev = NULL;
		}
	}
	else
	{
		repl(&tmp, &new, &rep, &idx);
	}
	return (new);
}
/**
*repl - ...
*@tmp : ...
*@new : ...
*@rep : ...
*@idx : ...
*Return: ...
*/
void repl(dlistint_t **tmp, dlistint_t **new,
dlistint_t **rep, unsigned int *idx)
{
	(*idx)--;
	while ((*idx)--)
	{
		*rep = (*rep)->next;
	}
	*tmp = (*rep)->next;
	(*rep)->next = *new;
	(*new)->prev = *rep;
	(*new)->next = *tmp;
	if (*tmp)
		(*tmp)->prev = *new;
}
