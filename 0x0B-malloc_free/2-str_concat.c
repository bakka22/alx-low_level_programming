#include "main.h"

/**
* _strlen - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int _strlen(char *s)
{
	char com, *h;
	int counter;

	counter = 0;
	h = s;
	com = *h;
	while (1)
	{
		if (com == '\0')
			break;

		counter += 1;
		h += 1;
		com = *h;
	}
	return (counter);
}
#include <stddef.h>
#include <stdlib.h>
/**
* str_concat - check if charcter is an alphabet
* @s1 : pointer argument
* @s2 : pointer
* Return: 1 if alphabet and 0 otherwise
*/
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = _strlen(s2);
	x = _strlen(s1);
	ptr = malloc((x + y) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = x; i < (x + y); i++)
	{
		ptr[i] = s2[i];
	}
	return (ptr);
}
