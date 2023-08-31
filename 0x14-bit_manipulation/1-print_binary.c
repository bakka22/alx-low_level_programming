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
	unsigned long int x = n, i;

	if (x >= (unsigned long int)INT_MIN)
		return;
	i = 0;
	while (x)
	{
		i++;
		x = n >> i;
	}
	if (i != 0)
		i--;
	for (; i > 0; i--)
	{
		_putchar(48 + ((n >> i) & 1));
	}
	_putchar(48 + ((n >> i) & 1));

}
