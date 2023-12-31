#include "main.h"

/**
* puts_half - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void puts_half(char *str)
{
	char *p;

	p = str;
	if (_strlen(str) % 2 == 0)
		p += (_strlen(str) / 2);
	else
		p += (_strlen(str) + 1) / 2;
	while (1)
	{
		if (*p == '\0')
			break;

		_putchar(*p);
		p += 1;
	}
	_putchar('\n');
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
