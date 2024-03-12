#include <stdio.h>
#include <stddef.h>
/**
*linear_search - find an item in a list using linear search
*@array: the array to be searched
*@size: size of the array
*@value: the value to look for
*Return: the index of the found itme or -1 otherwize
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}
	return (-1);
}
