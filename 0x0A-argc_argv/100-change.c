#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/* more headers goes there */
/**
*main - the main function
* @argc : arg count
* @argv : arg vector
* Return: 0 (success)
*/
int main(int argc, char **argv)
{
	int cents, coins, i;
	int x[] = {25, 10, 5, 2, 1};

	coins = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	for (i = 0; i < 5; i++)
	{
		while (1)
		{
			if (cents - x[i] >= 0)
			{
				cents -= x[i];
				coins += 1;
			}
			else
				break;
		}
	}
	if (cents < 0)
		printf("%d\n", 0);
	else
		printf("%d\n", coins);

	return (0);
}
