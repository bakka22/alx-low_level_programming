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
	ptr = _strpbrk(str,"xwwr" );
	printf("%s\n", ptr);
	ptr = _strpbrk(str, "xwwz\0r");
	if (ptr != NULL)
		printf("%s\n", ptr);
	else
		printf("ptr is NULL");

    return (0);
}