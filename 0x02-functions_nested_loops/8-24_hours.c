#include "main.h"

/**
*jack_bauer - print alphabets in lowercase
* Return: void
*/
void jack_bauer(void)
{
	int i;
	int j;
	int x;
	int y;

	for (i = 48 ; i <= 50 ; i++)
	{
		for (j = 48 ; j <= 57 ; j++)
		{
			for (x = 48 ; x <= 54 ; x++)
			{
				for (y = 48 ; y <= 57 ; y++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(x);
					_putchar(y);
					_putchar('\n');
					if (i == 50 && j == 52)
						break;
				}
			}
		}
	}

}
