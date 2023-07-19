#include "main.h"

/**
*print_times_table - print alphabets in lowercase
*@n: the number of TT
* Return: void
*/
void print_times_table(int n)
{
	int i, j, x;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;

			if (j == 0)
				_putchar(x + '0');
			else if (x < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(x + '0');
			}
			else if (x > 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(x / 10 + '0');
				_putchar(x % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
