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

	for (n = 97 ; n <= 122 ; n++)
		putchar(n);

	for (n = 65 ; n <= 90 ; n++)
		putchar(n);

	putchar('\n');
	return (0);
}
