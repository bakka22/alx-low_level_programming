#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "bakka";
	char str2[] = "bzkka";  
	int ptr;
	ptr = _strcmp(str, str2);
	printf("%d\n", ptr);
	ptr = _strcmp(str2, str);
	printf("%d\n", ptr);

    return (0);
}