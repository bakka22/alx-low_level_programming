#include "main.h"
/**
* _strlen_recursion - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
