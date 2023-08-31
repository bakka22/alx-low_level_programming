#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
/**
*set_bit - convert a base2 int to base 10 unsigned int
*@n : binary int
*@index : index
*Return: the converted number
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i;
	unsigned long int pow;

	if (index > 63)
		return (-1);
	pow = 2;
	for (i = 1; i < index; i++)
	{
		pow *= 2;
	}
	if (index == 0)
		pow = 1;

	*n = *n | pow;
	return (1);
}
