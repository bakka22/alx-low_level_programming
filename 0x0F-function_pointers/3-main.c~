#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"
#include <stdlib.h>
/**
*main - the main function
*@argc : the number of argument
*@argv : the argument vector
*Return: return 0 success
*/
int main(int argc, char **argv)
{
	int result, a, b;

	if (argc != 4)
	{
		printf("ERROR\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("ERROR\n");
		exit(99);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("ERROR\n");
		exit(100);
	}

	result = (get_op_func(argv[2]))(a, b);
	printf("%d\n", result);
	return (0);
}
