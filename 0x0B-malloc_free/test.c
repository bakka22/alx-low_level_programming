#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
int main()
{
	int *x;
	x = malloc(-1);
	if (x == NULL)
	{
		printf("x is NULL");
		return (1);
	}
	return (0);
}