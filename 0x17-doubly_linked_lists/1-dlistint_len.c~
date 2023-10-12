#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*listint_len - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t listint_len(const listint_t *h)
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
