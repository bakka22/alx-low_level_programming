#include "main.h"
/**
* _puts_recursion2 - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void _puts_recursion2(char *s)
{
	if (*s == '\0')
		return;

	_putchar(*s);
	_puts_recursion2(s + 1);
}

#include "main.h"
/**
* _puts_recursion - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void _puts_recursion(char *s)
{
	_puts_recursion2(s);
	_putchar('\n');
}
