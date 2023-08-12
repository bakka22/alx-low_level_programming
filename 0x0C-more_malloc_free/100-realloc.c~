#include <stddef.h>
#include <stdlib.h>
/**
* _realloc - check if charcter is an alphabet
* @ptr: pointer
* @old_size: pointer argument
* @new_size : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptr2;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	ptr2 = malloc(new_size);
	if (ptr != NULL)
	{
		for (i = 0; i < old_size && i < new_size; i++)
		{
			*((char *)ptr2 + i) = *((char *)ptr + i);
		}
		free(ptr);
	}
	return (ptr2);
}
