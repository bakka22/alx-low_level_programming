#include "hash_tables.h"
/**
*hash_table_set - add element to hash table
*@ht: the hash table
*@key: key of the node
*@value: value of the node
*Return: 1 on success 0 otherwize
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	unsigned long int x;

	if (!ht || !key)
		return (0);
	/*if (ht->size == 0 || ht->array == NULL)
		return (0);*/
	new = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = malloc(sizeof(char) * strlen(key));
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	strcpy(new->key, key);
	if (value)
	{
		new->value = malloc(sizeof(char) * strlen(value));
		if (new->value == NULL)
		{
			free(new->key);
			free(new);
			return (0);
		}
			strcpy(new->value, value);
	}
	else
		new->value = NULL;
	x = key_index((unsigned char *) key, ht->size);
	if ((ht->array)[x])
	{
		new->next = (ht->array)[x];
		(ht->array)[x] = new;
	}
	else
	{
		(ht->array)[x] = new;
		new->next = NULL;
	}
	return (1);
}
