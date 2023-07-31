#include <stdio.h>
/**
* print_diagsums - check if charcter is an alphabet
* @a : pointer argument
* @size : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void print_diagsums(int *a, int size)
{
	int *p = a;
	int i, b, c;

	b = 0;
	for (i = 0; i < size; i++)
	{
		b += *p;
		p = p + size + 1;
	}
	p = a;
	p = p + (size * size - size);
	for (i = 0; i < size; i++)
	{
		c += *p;
		p = p - (size - 1);
	}
	printf("%d, %d\n" , b, c);
}
