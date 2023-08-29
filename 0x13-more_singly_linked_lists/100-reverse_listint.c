#include "lists.h"
#include <stddef.h>
/**
*reverse_listint - reverse list
*@head : head of the list
*Return: a pointer to the first node
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pos1, *pos2;

	if (head == NULL || *head == NULL)
		return (NULL);
	pos1 = *head;
	pos2 = pos1->next;
	if (pos2 == NULL)
		return (pos1);
	if (pos2->next == NULL)
		*head = pos2;
	else
		*head = pos2->next;
	pos1->next = NULL;
	pos2->next = pos1;
	if (*head != pos2)
	{
		while (1)
		{
			if (pos2->next == NULL)
			{
				pos2->next = pos1;
				break;
			}
			else
			{
				pos1 = pos2;
				pos2 = *head;
				if (pos2->next != NULL)
				{
					*head = pos2->next;
					pos2->next = pos1;
				}
			}
		}
	}
	return (*head);
}