#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
*print_dog - initialize a dog var
*@d : pointer
*Return: nothing
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL || ((*d).name)[0] == '\0')
		(*d).name = "nil";
	if ((*d).owner == NULL || ((*d).owner)[0] == '\0')
		(*d).name = "nil";
	if ((*d).age == 0)
	{
		printf("Name : %s\nAge : %s\nOwner : %s\n", (*d).name, "nil", (*d).owner);
		return;
	}

	printf("Name: %s\nAge: %f\nOwner: %s\n", (*d).name, (*d).age, (*d).owner);
}
