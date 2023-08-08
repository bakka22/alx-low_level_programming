#include <stddef.h>
#include <stdlib.h>
/**
* create_array - check if charcter is an alphabet
* @size : pointer argument
* @c : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
