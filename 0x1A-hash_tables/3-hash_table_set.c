#include "hash_tables.h"

/**
 * hash_table_set - function that adds  element to the hash table
 * @ht: pointer to hash table.
 * @key:  add the element to key.
 * @value: add the element to value.
 * n@w: new node
 *
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *vc, *kc;
	hash_node_t  *bk, *nw;

	if (!ht || !key || !*key || !value)
		return (0);

	vc = strdup(value);
	if (!vc)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	bk = ht->array[index];

	while (bk)
	{
		if (!strcmp(key, bk->key))
		{
			free(bk->value);
			bk->value = vc;
			return (1);
		}
		bk = bk->next;
	}
	nw = calloc(1, sizeof(hash_node_t));
	if (nw == NULL)
	{
		free(vc);
		return (0);
	}
	kc = strdup(key);
	if (!kc)
		return (0);
	nw->key = kc;
	nw->value = vc;
	nw->next = ht->array[index];
	ht->array[index] = nw;
	return (1);
}
