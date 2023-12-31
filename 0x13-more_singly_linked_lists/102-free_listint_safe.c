#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*_r2 - ...
*@list : ...
*@size : ...
*@new : ...
*Return: ...
*/
listint_t **_r2(listint_t **list, size_t size, listint_t *new)
{
	listint_t **newlist;
	size_t i;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];
	newlist[i] = new;
	free(list);
	return (newlist);
}
/**
*free_listint_safe - print a linked list
*@h : head of the list
*Return: the number of nodes
*/
size_t free_listint_safe(listint_t **h)
{
	listint_t **arr = NULL, *tmp;
	size_t count, i;

	if (h == NULL || *h == NULL)
		return (0);
	count = 0;
	while (*h != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (*h == arr[i])
			{
				free(arr);
				*h = NULL;
				return (count);
			}
		}
		count++;
		arr = _r2(arr, count, *h);
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	free(arr);
	return (count);
}
