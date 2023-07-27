#include "main.h"

/**
* reverse_array - check if charcter is an alphabet
* @a : pointer argument
* @n : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void reverse_array(int *a, int n)
{
	int i, *p;
	long rep;

	rep = 0;
	p = a;
	p = p + n - 1;
	for (i = 0; i < n / 2; i++)
	{
		rep = a[i];
		a[i] = *p;
		*p = rep;
		p = p - 1;
	}
}

