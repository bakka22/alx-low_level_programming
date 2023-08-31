#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
/**
*print_binary - convert a base2 int to base 10 unsigned int
*@n : binary int
*Return: the converted number
*/
void print_binary(unsigned long int n)
{
	int i, y;

	y = 0;
	for (i = 63; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			y++;
		}
		else if (y)
		{
			_putchar('0');
		}
	}
	if (!y)
		_putchar('0');

}
