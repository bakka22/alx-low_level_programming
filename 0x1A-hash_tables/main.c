#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    hash_node_t *tmp;
    unsigned long int x;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "2nd");
    hash_table_set(ht, "mentioner", "1st");
    x =  key_index((unsigned char *) "hetairas", ht->size);
    tmp = (ht->array)[x];
    while(tmp)
    {
         printf("%s\n", tmp->value);
         tmp = tmp->next;
    }
    return (EXIT_SUCCESS);
}