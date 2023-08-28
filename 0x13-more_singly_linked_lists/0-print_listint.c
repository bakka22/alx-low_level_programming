#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_listint - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
