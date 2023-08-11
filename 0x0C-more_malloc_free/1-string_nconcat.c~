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
* string_nconcat - check if charcter is an alphabet
* @s1 : pointer argument
* @s2 : pointer
* @n : number
* Return: 1 if alphabet and 0 otherwise
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int j;
	unsigned int y, i, x;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	j = 0;
	y = _strlen(s2);
	x = _strlen(s1);
	if (y > n)
		y = n;

	ptr = malloc((x + y) * sizeof(char) + 1);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < x; i++)
	{
		ptr[i] = s1[i];
	}
	for (i = x; i < (x + y); i++)
	{
		ptr[i] = s2[j];
		j++;
	}
	return (ptr);
}
