#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_list - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			count++;
		}
		h = h->next;
	}
	return (count);
}
