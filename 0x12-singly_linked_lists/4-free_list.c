#include "lists.h"
#include <stdlib.h>
/**
*free_list - free a linked list
*@head : head of the list
*Return: nothing
*/
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	tmp = head;
	while (1)
	{
		head = tmp;
		if (head == NULL)
			break;
		tmp = tmp->next;
		free(head->str);
		free(head);
	}
}
