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
#include <stdio.h>
/**
* argstostr - check if charcter is an alphabet
* @ac : pointer argument
* @av : pointer
* Return: 1 if alphabet and 0 otherwise
*/
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, x, y, s, *slen;

	if (av == NULL || ac <= 0)
		return (NULL);

	s = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			av[i] = "";
	}
	slen = malloc(sizeof(int) * ac);
	if (slen == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		slen[i] = _strlen(av[i]);
		s += _strlen(av[i]);
	}

	ptr = malloc(s * sizeof(char) + ac);
	if (ptr == NULL)
		return (NULL);

	y = 0;
	for (i = 0; i < ac; i++)
	{
		for (x = 0; x < slen[i]; x++)
		{
			ptr[y] = av[i][x];
			y++;
		}
		ptr[y] = '\n';
		y++;
	}
	free(slen);
	return (ptr);
}
