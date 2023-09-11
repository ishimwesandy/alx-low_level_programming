#include "hash_tables.h"

/**
 * hash_table_print - function to print the key:value from hashed table
 * @ht: pointer to hash table
 *
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t  *node;
	int fg = 0;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (fg)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			fg = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
