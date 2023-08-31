#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
/**
*flip_bits - convert a base2 int to base 10 unsigned int
*@n : binary int
*@m : binary int
*Return: the converted number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;
	int i;
	unsigned long int flipper;

	flipper = n ^ m;
	count = 0;
	for (i = 63; i >= 0; i--)
	{
		count += ((flipper >> i) & 1);
	}
	return (count);
}
