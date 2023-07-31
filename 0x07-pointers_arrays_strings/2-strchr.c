#include <stddef.h>
#include <stdio.h>
/**
* _strchr - check if charcter is an alphabet
* @s : pointer argument
* @c : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strchr(char *s, char c)
{
	/*char *p;*/
	int i;


	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	if (c == '\0')
		return (&s[i]);
	else
		return (NULL);
}
