#include "main.h"

/**
* print_array - check if charcter is an alphabet
* @a : pointer argument
*@n : number
* Return: 1 if alphabet and 0 otherwise
*/
void print_array(int *a, int n)
{
	int *p, i;

	p = a;
	i = 0;
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			_putchar(*P);
		}
		else
		{
			_putchar(*P);
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
