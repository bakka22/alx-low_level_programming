#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
*main - the main function
* Return: 0 (success)
*/
int main(void)
{
	int n;
	int x;
	int j;

	for (n = 48 ; n <= 55 ; n++)
	{
		for (x = n + 1 ; x <= 56 ; x++)
		{
			for (j = x + 1 ; j <= 57 ; j++)
			{
				putchar(n);
				putchar(x);
				putchar(j);
				if (n != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
