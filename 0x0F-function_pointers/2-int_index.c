#include <stddef.h>
/**
*int_index - initialize a dog var
*@array : name
*@size : functoin pointer
*@cmp : function pointer
*Return: index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
