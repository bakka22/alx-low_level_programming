#include "lists.h"
#include <stddef.h>
/**
*find_listint_loop - find a loop in list
*@head : head of the list
*Return: the node starts the loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pos1, pos2;

	if (head == NULL)
		return (NULL);
	pos1 = head;
	pos2 = head;
	while (pos2 && pos2->next)
	{
		if (pos2->next->next == pos1)
			return (pos1->next);
		pos2 = pos2->next->next;
		pos1 = pos1->next;
	}
	return (NULL);
}