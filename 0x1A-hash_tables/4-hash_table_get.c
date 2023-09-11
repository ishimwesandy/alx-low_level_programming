#include "hash_tables.h"
/**
 * hash_table_get - function that  retrieve value associeted with specific key
 * @ht: pointer of hashed table
 * @key: retrive value to the key 
 *
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t  *node;

	if (!ht || !key || !*key)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	node = ht->array[i];

	while (node)
	{
		if (!strcmp(key, node->key))
			return (node->value);
		node = node->next;
	}
	return (NULL);
}
