#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @he: pointer to the list_t list
 * function that returns the number of elements in a linked list_t list.
 *
 * Return: number of elements in h
 */
size_t list_len(const list_t *he)
{
	size_t s = 0;

	while (he)
	{
		s++;
		he = he->next;
	}
	return (s);
}

