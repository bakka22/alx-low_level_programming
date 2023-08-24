#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*print_list - print a linked list
*@h : head of the list
*Return : the number of nodes
*/
size_t print_list(const list_t *h)
{
	list_t *tmp;
	size_t count;

	if (h == NULL)
		return (0);
	count = 0;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
		{
			printf("[0] (nil)\n");
			count++;
		}
		else
		{
			printf("[%d] %s", tmp->len, tmp->str);
			count++;
		}
		tmp = tmp->next;
	}
	return (count);
}
