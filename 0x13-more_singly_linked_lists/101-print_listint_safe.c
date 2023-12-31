#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*_r - ...
*@list : ...
*@size : ...
*@new : ...
*Return: ...
*/
const listint_t **_r(const listint_t **list, size_t size, listint_t *new)
{
	const listint_t **newlist;
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
*print_listint_safe - print a linked list
*@head : head of the list
*Return: the number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	const listint_t **arr = NULL;
	size_t count, i;

	if (head == NULL)
		return (0);
	count = 0;
	while (head != NULL)
	{
		for (i = 0; i < count; i++)
		{
			if (head == arr[i])
			{
				free(arr);
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (count);
			}
		}
		count++;
		arr = _r(arr, count, (listint_t *)head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(arr);
	return (count);
}
