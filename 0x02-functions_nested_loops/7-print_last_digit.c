#include "main.h"
#include <stdio.h>

/**
* print_last_digit - check if charcter is an alphabet
* @i: the number under operation
* Return: last digit
*/
int print_last_digit(int i)
{
	printf("%d", i % 10);
	return (i % 10);

}
