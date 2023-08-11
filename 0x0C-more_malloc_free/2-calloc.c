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

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
