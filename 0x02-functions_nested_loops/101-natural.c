#include <stdio.h>
/**
*main - the main function
*Return: returns 0 (success)
*/
int main(void)
{
	int i, result;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		result = result + i;
	}
	printf("%d", result);
	return (0);
}
