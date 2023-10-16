#include "main.h"
/**
* _strcat - check if charcter is an alphabet
* @dest : pointer argument
* @src : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = 0;
	for (i = _strlen(dest); src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j += 1;
	}
	dest[i++] = '\0';
	return (dest);
}
