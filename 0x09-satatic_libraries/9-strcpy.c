#include "main.h"

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
