#include "hash_tables.h"
/**
*hash_table_get - retrive value from hash table via the key
*@ht: the hash table
*@key: the key
*Return: the value
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int x;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);
	x = key_index((unsigned char *) key, ht->size);
	tmp = (ht->array)[x];
	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
