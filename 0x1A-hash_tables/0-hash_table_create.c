#include "hash_tables.h"

/**
 * hash_table_create - function that  creates  hashed table
 * @size: size of the array table
 *Return: it will return NULL when there is error otherwise print value
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tb;

	if (size == 0)
		return (NULL);

	tb = calloc(1, sizeof(hash_table_t));
	if (tb == NULL)
		return (NULL);
	tb->size = size;
	tb->array = calloc(size, sizeof(hash_node_t *));
	if (tb->array == NULL)
	{
		free(tb);
		return (NULL);
	}
	return (tb);
}
