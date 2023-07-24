#include "main.h"

/**
* _puts - check if charcter is an alphabet
* @str : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void _puts(char *str)
{
	char *p;

	p = str;
	p = p - 1;
	while (1)
	{
		p += 1;
		_putchar(*p);
		if (*p == '\0')
			break;

		p += 1;
		if (*p == ('\0')
			break;
	}
	_putchar('\n');
}
