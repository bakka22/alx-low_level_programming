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
			print_number(*p);
		}
		else
		{
			print_number(*p);
			_putchar(',');
			_putchar(' ');
		}
		p += 1;
	}
	_putchar('\n');
}
#include "main.h"

/**
* print_number - check if charcter is an alphabet
* @n: the length of the line
* Return: 1 if alphabet and 0 otherwise
*/
void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}

	if (n1 / 10)
	{
		print_number(n1 / 10);
	}

	_putchar(n1 % 10 + '0');
}
