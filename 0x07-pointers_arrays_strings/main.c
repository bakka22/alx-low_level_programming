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
	ptr = _memset(str, 'A', 5);
	printf("%s\n", ptr);
	printf("%s\n", str);

    return (0);
}