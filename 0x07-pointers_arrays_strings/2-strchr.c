#include <stddef.h>
/**
* _strchr - check if charcter is an alphabet
* @s : pointer argument
* @c : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strchr(char *s, char c)
{
	char *p;
	int i;

	p = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (*p == c)
		{
			break;
		}
		p += 1;
	}
	if (*p)
		return (p);
	else
		return (NULL);
}
