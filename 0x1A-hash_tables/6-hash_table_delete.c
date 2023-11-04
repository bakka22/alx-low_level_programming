#include "hash_tables.h"
/**
*hash_table_delete - delete a hash table
*@ht: pointer to the hash table
*Return: nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int x;
	hash_node_t *tmp, *tmp2;

	if (!ht)
		return;
	for (x = 0; x < ht->size; x++)
	{
		tmp = (ht->array)[x];
		while (tmp)
		{
			tmp2 = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = NULL;
			tmp = tmp2;
		}
	}
	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
