#include "main.h"

/**
* cap_string - check if charcter is an alphabet
* @a : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *cap_string(char *a)
{
	int i;

	for (i = 0 ; a[i] != '\0'; i++)
	{
		if ((a[i] >= 32 && a[i] <= 34) || a[i] == 40 || a[i] == 41 || a[i] == 44 ||
		 a[i] == 46 || a[i] == 59 || a[i] == 63 || a[i] == 123 || a[i] == 125)
		{
			if (a[i + 1] >= 97 && a[i + 1] <= 122)
				a[i + 1] -= 32;
		}
	}
	return (a);
}

