#include <stddef.h>
/**
* _strstr - check if charcter is an alphabet
* @haystack : pointer argument
* @needle : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j, chk;
	char *p;

	chk = 0;
	p = haystack;
	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			chk = 1;
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (*(p + j) == needle[j])
				{
					chk = 1;
				}
				else
				{
					chk = 0;
					break;
				}
			}
		}
		if (chk == 1)
			break;

		p += 1;
	}
	if (chk == 1)
		return (&haystack[i]);
	else
		return (NULL);
}
