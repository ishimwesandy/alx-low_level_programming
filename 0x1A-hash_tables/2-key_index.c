#include "hash_tables.h"

/**
 * key_index - get index of  given value  or key 
 * @key: key of string to be  hashed
 * @size: size of  hashed array onn  table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
