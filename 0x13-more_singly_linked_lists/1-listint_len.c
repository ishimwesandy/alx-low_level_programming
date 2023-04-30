#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked lists
 * @he: linked list of type listint_t to traverse
 * function that returns the number of elements in a linked listint_t list.
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *he)
{
	size_t num = 0;

	while (he)
	{
		num++;
		he = he->next;
	}

	return (num);
}

