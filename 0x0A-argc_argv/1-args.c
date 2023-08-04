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
	(void)**argv;
	printf("%d\n", argc);
	return (0);
}
