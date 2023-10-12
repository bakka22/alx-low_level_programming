#include "lists.h"
#include <stddef.h>

/**
*get_dnodeint_at_index - get the indexed node
*@head : the head of the list
*@index : index
*Return: return the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (head != NULL && index--)
	{
		head = head->next;
	}
	return (head);
}
