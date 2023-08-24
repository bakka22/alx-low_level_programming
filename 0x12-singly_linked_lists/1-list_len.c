#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*list_len - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t list_len(const list_t *h)
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
