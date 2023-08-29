#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*listint_len2 - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t listint_len2(const listint_t *h)
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
*insert_nodeint_at_index - get the indexed node
*@head : the head of the list
*@idx : index
*@n : data of new node
*Return: return the nth node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp, *rep;

	if (idx > (unsigned int)(listint_len2(*head)))
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	rep = *head;
	if (idx == 0)
	{
		if (*head != NULL)
		{
			tmp = (*head)->next;
			*head = new;
			new->next = tmp;
		}
		else
		{
			*head = new;
		}
	}
	else
	{
		idx--;
		while (idx--)
		{
			rep = rep->next;
		}
		tmp = rep->next;
		rep->next = new;
		new->next = tmp;
	}
	return (new);
}
