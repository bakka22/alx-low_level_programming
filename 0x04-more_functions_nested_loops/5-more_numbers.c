#include "main.h"

/**
* more_numbers - check if charcter is an alphabet
* Return: 1 if alphabet and 0 otherwise
*/
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j < 10)
				_putchar(j + '0');
			else if (j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}

}
