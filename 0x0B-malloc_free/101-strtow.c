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
* @ptr : ...
* @a : ...
* @str : ...
* @x : ...
* Return: ....
*/
char **sup(char **ptr, int a, char *str, int x)
{
	int s, i, j;

	s = 0;
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			continue;
		if (str[i] != ' ' && str[i - 1] == ' ')
		{
			s = _strlen(str + i, ' ');
			ptr[x] = malloc(sizeof(char) * (s + 1));
			if (ptr[x] == NULL)
			{
				for (j = x; j >= 0; j--)
					free(ptr[j]);

				free(ptr);
				return (NULL);
			}
			for (j = 0; j < s; j++)
			{
				ptr[x][j] = str[i + j];
			}
			ptr[x][j] = '\0';
			x += 1;
		}
	}
	if (str[0] != ' ')
	{
		for (i = 0; i < a; i++)
		{
			ptr[0][i] = str[i];
		}
		ptr[0][i] = '\0';
	}
	return (ptr);
}

/**
* strtow - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char **strtow(char *str)
{
	char **ptr;
	int i, y, a, x;

	a = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	x = 0;
	/*if (str[0] != ' ')
		y = 2;
	else*/
	y = 1;

	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
		{
			continue;
		}

		if (str[i] != ' ' && str[i - 1] == ' ')
			y += 1;
	}
	if ((str[0] != ' ' && y == 2) || (str[0] == ' ' && y == 1))
		return (NULL);

	ptr = malloc(sizeof(char *) * y);
	if (ptr == NULL)
		return (NULL);

	/*if (str[0] != ' ')
	{
		a = _strlen(str, ' ');
		ptr[0] = malloc(sizeof(char) * (a + 1));
		if (ptr[0] == NULL)
		{
			free(ptr[0]);
			free(ptr);
			return (NULL);
		}
		x = 1;
	}*/
	ptr = sup(ptr, a, str, x);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
