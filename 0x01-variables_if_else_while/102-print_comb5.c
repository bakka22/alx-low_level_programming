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
	int i;
	int j;

	for (n = 48 ; n <= 57 ; n++)
	{
		for (x = 48 ; x <= 57 ; x++)
		{
			for (i = n ; i <= 57 ; i++)
			{
				for (j = 48 ;  j <= 57 ; j++)
				{
					if ((n == i && x == j) || (n == i && j < x) || i < n)
						continue;
					else
					{
						putchar(n);
						putchar(x);
						putchar(' ');
						putchar(i);
						putchar(j);
					}
					if (n == 57 && i == 56)
						continue;
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
