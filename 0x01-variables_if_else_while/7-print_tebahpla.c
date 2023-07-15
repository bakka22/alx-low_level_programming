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

	for (n = 122 ; n >= 97 ; n--)
		putchar(n);

	putchar('\n');
	return (0);
}
