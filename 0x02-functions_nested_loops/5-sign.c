#include "main.h"

/**
* print_sign - check if charcter is an alphabet
* @n: the number to be checked
* Return: 1 if posative and 0 otherwise
*/
int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (-1);
	}
	else
		return (0);
}
