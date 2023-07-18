#include "main.h"

/**
* print_last_digit - check if charcter is an alphabet
* @i: the number under operation
* Return: last digit
*/
int print_last_digit(int i)
{
	if ( i < 0)
		i = i * -1;

	_putchar((i % 10) + '0');
	return (i % 10);

}
