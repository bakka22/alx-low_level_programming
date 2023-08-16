#include <stddef.h>
/**
*array_iterator - initialize a dog var
*@array : name
*@size : functoin pointer
*@action : function pointer
*Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
