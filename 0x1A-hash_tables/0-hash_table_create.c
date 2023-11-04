#include "hash_tables.h"
/**
*hash_table_create - create a hash table
*@size: size of the array
*Return: a pointer to the new hash table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_ht;

	new_ht = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (new_ht == NULL)
		return (NULL);
	new_ht->size = size;
	new_ht->array = calloc(sizeof(hash_node_t *), size);
	if (new_ht->array == NULL)
	{
		free(new_ht);
		return (NULL);
	}
	return (new_ht);

}
