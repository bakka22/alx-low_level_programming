#include <stdio.h>
#include <stddef.h>
#include <math.h>
/**
*jump_search - find an item in a list using linear search
*@array: the array to be searched
*@size: size of the array
*@value: the value to look for
*Return: the index of the found itme or -1 otherwize
*/
int jump_search(int *array, size_t size, int value)
{
	int low, i, gap;

	gap = (int)sqrt((double)size);
	low = 0;
	if (array == NULL || size == 0)
		return (-1);
	while (1)
	{
		printf("Value checked array[%d] = [%d]\n", low, array[low]);
		if (array[low] == value)
			return (low);
		if (low + gap < (int)size - 1 && array[low + gap] >= value)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, low + gap);
			for (i = low; i <= low + gap; i++)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			}
			return (-1);
		}
		else if (low + gap > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", low, low + gap);
			for (i = low; i <= (int)size - 1; i++)
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
			return (-1);
		}
		low = low + gap;
	}
}
