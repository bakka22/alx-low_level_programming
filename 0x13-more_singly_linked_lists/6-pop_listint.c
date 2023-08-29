#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
/**
*pop_listint - delets the head node
*@head : the head of the list
*Return: data of the poped node
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
