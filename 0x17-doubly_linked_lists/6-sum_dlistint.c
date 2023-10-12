#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*sum_dlistint - print a linked list
*@head : head of the list
*Return: the number of nodes
*/
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
