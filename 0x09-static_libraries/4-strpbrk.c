#include <stddef.h>
/**
* _strpbrk - check if charcter is an alphabet
* @s : pointer argument
* @accept : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j, chk;

	chk = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				chk = 1;
				break;
			}
		}
		if (chk == 1)
			break;
	}
	if (chk == 1)
		return (&s[i]);
	else
		return (NULL);
}
