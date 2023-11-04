#include "hash_tables.h"
/**
*hash_table_print - print a hash table
*@ht: the hash table
*Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x = 0;
	hash_node_t *tmp;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		tmp = (ht->array)[x];
		while (tmp)
		{
			if (flag)
				printf(", ");
			printf("\'%s\': \'%s\'", tmp->key, tmp->value);
			flag = 1;
			tmp = tmp->next;
		}
	}
	printf("}\n");
}
