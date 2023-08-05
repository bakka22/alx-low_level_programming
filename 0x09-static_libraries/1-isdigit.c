#include "main.h"

/**
* _isdigit - check if charcter is an alphabet
* @c: the number to be checked
* Return: 1 if alphabet and 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
