#include "dog.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
*free_dog - initialize a dog var
*@d : pointer
*Return: nothing
*/
void free_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	free((*d).name);
	free((*d).owner);
	free(d);
}
