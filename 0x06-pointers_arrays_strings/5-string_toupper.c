#include "main.h"

/**
* string_toupper - check if charcter is an alphabet
* @a : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0 ; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] -= 32;
	}
	return (a);
}

