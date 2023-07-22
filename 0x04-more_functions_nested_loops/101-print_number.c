#include "main.h"

/**
* print_number - check if charcter is an alphabet
* @n: the length of the line
* Return: 1 if alphabet and 0 otherwise
*/
void print_number(int n)
{
	int a, b, c, d;

	a = n / 1000;
	b = n / 100;
	c = n / 10;
	d = n % 10;
	if (n >= 1000)
	{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
	}
	else if (n >= 100)
	{
		_putchar(b + '0');
		_putchar(c + '0');
		_putchar(d + '0');
	}
	else if (n >= 10)
	{
		_putchar(c + '0');
		_putchar(d + '0');
	}
	else
		_putchar(n + '0');

}
