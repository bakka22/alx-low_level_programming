#include "main.h"

/**
* _strncpy - check if charcter is an alphabet
* @dest : pointer argument
* @src : pointer argument
* @n : number
* Return: 1 if alphabet and 0 otherwise
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (i = i + 1; dest[i] != '\0'; i++)
		dest[i] = '\0';
	return (dest);
}

