/**
* _atoi - check if charcter is an alphabet
* @s : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
int _atoi(char *s)
{
	int i, sign;
	double new;

	sign = 0;
	new = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 45)
			sign += 1;

		if (s[i] >= 48 && s[i] <= 57)
		{
			new = (new * 10) + (s[i] - 48);
		}
		if ((s[i] >= 48 && s[i] <= 57) && (s[i + 1] < 48 || s[i + 1] > 57))
		{
			break;
		}
	}
		if (sign % 2 != 0)
			new = -new;
		else
			new = new;

		return (new);
}
#include <stdlib.h>
#include <time.h>
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
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}
