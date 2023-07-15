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

	for (n = 48 ; n <= 56 ; n++)
	{
		for (x = n + 1 ; x <= 57 ; x++)
		{
			putchar(n);
			putchar(x);
			if (n != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
