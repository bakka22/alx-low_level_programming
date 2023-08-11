#include <stddef.h>
#include <stdlib.h>
/**
* array_range - check if charcter is an alphabet
* @min: number
* @max : number
* Return: 1 if alphabet and 0 otherwise
*/
int *array_range(int min, int max)
{
	int *ptr;
	int i, x;

	if (min > max)
		return (NULL);

	x = max - min + 1;
	ptr = malloc(sizeof(int) * x);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i <= x; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
