#include "lists.h"
#include <stddef.h>

/**
*get_nodeint_at_index - get the indexed node
*@head : the head of the list
*@index : index
*Return: return the nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head == NULL)
		return (NULL);
	while (head != NULL && index--)
	{
		head = head->next;
	}
	return (head);
}
