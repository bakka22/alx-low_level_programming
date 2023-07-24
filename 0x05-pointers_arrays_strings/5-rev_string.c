#include "main.h"

/**
* rev_string - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void rev_string(char *s)
{
	char *p;
	char *p2;
	char x;
	int counter, len;

	len = _strlen(s);
	counter = 0;
	p2 = s;
	p = s;
	p = p + _strlen(s) - 1;
	while (1)
	{
		if (counter == len / 2)
			break;
		x = *p2;
		*p2 = *p;
		*p = x;
		p -= 1;
		p2 += 1;
		counter += 1;
	}
}

/**
* _strlen - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int _strlen(char *s)
{
	char com, *h;
	int counter;

	counter = 0;
	h = s;
	com = *h;
	while (1)
	{
		if (com == '\0')
			break;

		counter += 1;
		h += 1;
		com = *h;
	}
	return (counter);
}
