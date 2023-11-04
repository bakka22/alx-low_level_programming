#include "hash_tables.h"
/**
*key_index - return index
*@key: key of the value
*@size: soze of the array
*Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int x;

	x = hash_djb2((unsigned char *) key);
	if (size == 0)
		return (-1);
	return ((x % (unsigned long int) size));
}
