#include "lists.h"
#include <stdlib.h>
/**
*free_listint2 - free a linked list
*@head : head of the list
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	tmp = *head;
	while (1)
	{
		*head = tmp;
		if (*head == NULL)
			break;
		tmp = tmp->next;
		free(*head);
	}
}
