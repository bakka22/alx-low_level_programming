#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char str[] = "-abobaker55  mohamed22 and 5223";
	char str2[] = "bakka";  
	char *ptr;
	ptr = _strcat(str, str2);
	printf("%s\n", ptr);
    return (0);
}