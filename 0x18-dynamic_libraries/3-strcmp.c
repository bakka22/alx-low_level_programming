#include "main.h"

/**
* _strcmp - check if charcter is an alphabet
* @s1 : pointer argument
* @s2 : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int i, counter;

	counter = 0;
	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			if (s1[i] == '\0' && s2[i] == '\0')
				break;

			continue;
		}

		if (s1[i] != s2[i])
		{
			counter = s1[i] - s2[i];
			break;
		}
	}
	return (counter);
}

