#include "main.h"

/**
* puts2 - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void puts2(char *str)
{
	char *p;

	p = str;
	while (1)
	{
		if (*p == '\0')
			break;
		_putchar(*p);
		p += 1;

		if (*p == '\0')
			break;

		p += 1;
	}
	_putchar('\n');
}
