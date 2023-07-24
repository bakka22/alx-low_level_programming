#include "main.h"

/**
* swap_int - check if charcter is an alphabet
* @a : pointer argument
* @b : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
