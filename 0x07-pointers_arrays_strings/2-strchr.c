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
	for (;; i++)
	{
		if (*p == c)
			return (p);
		else if (*p == '\0')
			return (NULL);

		p += 1;
	}
	return (NULL);
}
