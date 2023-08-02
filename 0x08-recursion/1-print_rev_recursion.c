#include "main.h"
/**
* _print_rev_recursion - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
