#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "abobaker altom babekir mohammed"; 
	char *ptr;
	ptr = _strchr(str, 'l');
	printf("%s\n", ptr);
	ptr = _strchr(str, 'x');
	if (ptr != NULL)
		printf("%s\n", ptr);
	else
		printf("ptr is NULL");

    return (0);
}