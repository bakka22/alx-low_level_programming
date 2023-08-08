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
* _strdup - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, x;

	if (str == NULL)
		return (NULL);

	x = _strlen(str);
	ptr = malloc(x * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
