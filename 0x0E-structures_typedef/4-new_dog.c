/**
* _strcpy - check if charcter is an alphabet
* @dest : pointer argument
* @src : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
#include <stdlib.h>
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
#include "dog.h"
#include <stddef.h>
/**
*new_dog - initialize a dog var
*@name : name
*@age : age
*@owner : owner
*Return: nothing
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	if (name == NULL)
		name = "";
	if (owner == NULL)
		owner = "";
	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);

	(*p).name = malloc(_strlen(name) + 1);
	if ((*p).name == NULL)
	{
		free(p);
		return (NULL);
	}

	(*p).owner = malloc(_strlen(owner) + 1);
	if ((*p).owner == NULL)
	{
		free(p);
		free((*p).name);
		return (NULL);
	}

	_strcpy((*p).name, name);
	(*p).age = age;
	_strcpy((*p).owner, owner);
	return (p);
}
