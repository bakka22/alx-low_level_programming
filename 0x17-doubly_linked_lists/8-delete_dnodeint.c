#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
*delete_dnodeint_at_index - delets the head node
*@head : the head of the list
*@index : index for node to delete
*Return: data of the poped node
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *del;

	if (head == NULL)
		return (-1);
	tmp = *head;
	if (tmp == NULL)
		return (-1);
	for (; index > 1; index--)
	{
		if (tmp->next == NULL)
			return (-1);
		tmp = tmp->next;
	}
	if (index == 0)
	{
		del = tmp->next;
		free(tmp);
		*head = del;
	}
	else
	{
		del = tmp->next->next;
		free(tmp->next);
		tmp->next = del;
		if (del)
			del->prev = tmp;
	}
	return (1);
}
