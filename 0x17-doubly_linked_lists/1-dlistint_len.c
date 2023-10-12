#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*dlistint_len - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t dlistint_len(const dlistint_t *h)
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
