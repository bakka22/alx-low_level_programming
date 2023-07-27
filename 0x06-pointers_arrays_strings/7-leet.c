#include "main.h"

/**
* leet - check if charcter is an alphabet
* @a : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *leet(char *a)
{
	int i, con;
	int ls[] = {4, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 7,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 1,
	 0, 0, 0, 0, 0, 0, 0, 7};

	con = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == 'a' || a[i] == 'A' || a[i] == 'e' || a[i] == 'E' ||
		 a[i] == 'o' || a[i] == 'O' || a[i] == 't' || a[i] == 'T' ||
		 a[i] == 'l' || a[i] == 'L')
		{
			con = a[i] - 65;
			a[i] = ls[con];
		}
	}
	return (a);
}

