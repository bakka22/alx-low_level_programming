#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
*delete_nodeint_at_index - delets the head node
*@head : the head of the list
*@index : index for node to delete
*Return: data of the poped node
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *del;

	tmp = *head;
	if (tmp == NULL)
		return (-1);
	for (; index > 1; index--)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (-1);
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
	}
	return (1);
}
