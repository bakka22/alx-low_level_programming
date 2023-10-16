#include "main.h"
/**
* _strncat - check if charcter is an alphabet
* @dest : pointer argument
* @src : pointer argument
* @n : number
* Return: 1 if alphabet and 0 otherwise
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	if (n != 0)
	{
		j = 0;
		for (i = _strlen(dest); j < n && src[j] != '\0'; i++)
		{
			dest[i] = src[j];
			j += 1;
		}
		dest[i++] = '\0';
	}
		return (dest);
}
