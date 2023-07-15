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

	for (n = 48 ; n <= 56 ; n++)
	{
		putchar(n);
		putchar(',');
		putchar(' ');
	}
	putchar('9');

	putchar('\n');
	return (0);
}
