#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
* _strlen - check if charcter is an alphabet
* @s : pointer argument
* @c : ....
* Return: 1 if alphabet and 0 otherwise
*/
int _strlen(char *s, char c)
{
	char com, *h;
	int counter;

	counter = 0;
	h = s;
	com = *h;
	while (1)
	{
		if (com == c)
			break;
		counter += 1;
		h += 1;
		com = *h;
	}
	return (counter);
}
/**
* sup - support
* @str : ...
* Return: ...
*/
int sup(char *str)
{
	int i, y;

	y = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		y += 1;
		while (str[i + 1] != ' ' && str[i + 1] != '\0')
			i++;
	}
	printf("%d", y);
	return (y);
}
/**
* strtow - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char **strtow(char *str)
{
	char **ptr;
	int i, y = sup(str), x = 0, s = 0, j;

	if (str == NULL || *str == '\0')
		return (NULL);
	if (y == 0)
		return (NULL);
	ptr = malloc(sizeof(char *) * (y + 1));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		while (str[i] == ' ')
			i++;
		if (str[i] == '\0')
			break;
		if (str[i] != ' ' && str[i] != '\0')
		s = _strlen(str + i, ' ');
		ptr[x] = malloc(sizeof(char) * (s + 1));
		if (ptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptr[x]);
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < s; j++)
		{
			ptr[x][j] = str[i + j];
		}
		ptr[x][j] = '\0';
		x += 1;
		while (str[i + 1] != ' ' && str[i + 1] != '\0')
			i++;
	}
	ptr[x] = NULL;
	return (ptr);
}
