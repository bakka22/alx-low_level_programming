#include "main.h"
#include <stddef.h>
/**
*print_binary - convert a base2 int to base 10 unsigned int
*@n : binary int
*Return: the converted number
*/
void print_binary(unsigned long int n)
{
	int i;

	i = 0;
	while (n >> i)
	{
		i++;
	}
	if (i != 0)
		i--;
	for (; i >= 0; i--)
	{
		_putchar(48 + ((n >> i) & 1));
	}

}
