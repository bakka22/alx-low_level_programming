#include "main.h"
#include <stddef.h>
#include <stdio.h>
#include <limits.h>
/**
*get_endianness - convert a base2 int to base 10 unsigned int
*Return: the converted number
*/
int get_endianness(void)
{
	int i;
	char *p = (char *)&i;

	if (*p)
		return (1);
	return (0);
}
