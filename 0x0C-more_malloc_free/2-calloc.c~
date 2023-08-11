#include <stddef.h>
#include <stdlib.h>
/**
* _calloc - check if charcter is an alphabet
* @nmemb: pointer argument
* @size : pointer argument
* Return: 1 if alphabet and 0 otherwise
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
