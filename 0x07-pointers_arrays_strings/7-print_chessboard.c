#include <stddef.h>
#include <main.h>
/**
* print_chessboard - check if charcter is an alphabet
* @a : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void print_chessboard(char (*a)[8])
{
	int i, j;
	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 8)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[i][j];
			}
		}
	}
}
