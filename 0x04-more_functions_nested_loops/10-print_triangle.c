#include "main.h"

/**
* print_triangle - check if charcter is an alphabet
* @size: the length of the line
* Return: 1 if alphabet and 0 otherwise
*/
void print_triangle(int size)
{
	int i, x, red, j;

	red = size;
	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (x = 0; x < red - 1; x++)
				_putchar(' ');

			for (j = 1; j <= i; j++)
				_putchar('#');

			_putchar('\n');
			red--;
		}
	}
	else
		_putchar('\n');

}
