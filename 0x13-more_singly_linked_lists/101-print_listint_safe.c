#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
/**
*print_listint_safe - print a linked list
*@head : head of the list
*Return: the number of nodes
*/
size_t print_listint_safe(const listint_t *head)
{
	listint_t **arr;
	int i, lim;
	size_t count;

	if (head == NULL)
		return (0);
	lim = 0;
	count = 0;
	arr = malloc(sizeof(listint_t **));
		if (arr == NULL)
			exit(98);
	while (head != NULL)
	{
		for (i = 0; i < lim; i++)
		{
			if (head == arr[i])
			{
				free(arr);
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (count);
			}
		}
		arr[lim] = (listint_t *)head;
		lim++;
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		head = head->next;
	}
	free(arr);
	return (count);
}
