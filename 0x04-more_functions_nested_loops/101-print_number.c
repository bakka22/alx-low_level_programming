#include "main.h"

/**
* print_number - check if charcter is an alphabet
* @n: the length of the line
* Return: 1 if alphabet and 0 otherwise
*/
void print_number(int n)
{
	int i, a, b, c;

	a = 1;
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
		_putchar(n);
	}

	while (n != 0)
	{
		n = n / 10;
		a += 1;
		_putchar(n);
	}

	for (i = a - 1; i > 0; i--)
	{
		b = 1;
		for (c = 1; c <= a - 1; i++)
		{
			b = b * 10; 
		}
		_putchar((n / b) + '0');
	}
	_putchar(n % 10 + '0');
}
