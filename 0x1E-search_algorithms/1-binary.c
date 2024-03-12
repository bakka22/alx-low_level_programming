#include <stdio.h>
#include <stddef.h>
/**
*binary_search - find an item in a list using linear search
*@array: the array to be searched
*@size: size of the array
*@value: the value to look for
*Return: the index of the found itme or -1 otherwize
*/
int binary_search(int *array, size_t size, int value)
{
	int low, high, mid, i;

	low = 0;
	high = size - 1;
	if (array == NULL || size == 0)
		return (-1);
	while (low <= high)
	{
		printf("searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i != low)
				printf(", %d", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");
		mid = low + (high - low) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
