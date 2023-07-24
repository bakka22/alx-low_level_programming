#include "main.h"

/**
* print_rev - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void print_rev(char *str)
{
	char *p;

	p = str;
	p = p + _strlen(str);
	while (1)
	{
		_putchar(*p);
		p -= 1;
		if (p < str)
			break;
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
