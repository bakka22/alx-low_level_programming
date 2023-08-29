#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
*sum_listint - print a linked list
*@head : head of the list
*Return: the number of nodes
*/
int sum_listint(listint_t *head)
{
	int count;

	if (head == NULL)
		return (0);
	count = 0;
	while (head != NULL)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
