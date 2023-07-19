#include "main.h"

/**
*print_times_table - print alphabets in lowercase
*@n: the number of TT
* Return: void
*/
void print_times_table(int n)
{
	int i, j, x, y, k;

	if (n < 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				x = i * j;
				y = x / 100;
				k = (x / 10) % 10;
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
				else if (x >= 10)
				{
					_putchar(',');
					_putchar(' ');
					if (x >= 100)
						_putchar(y = '0');
					else
						_putchar(' ');

					_putchar(k + '0');
					_putchar(x % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
