#include "lists.h"

/**
 * print_listint - prints all the elements of a linked lists
 * @he: linked list of type listint_t to print
 *function that prints all the elements of a listint_t list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *he)
{
	size_t num = 0;

	while (he)
	{
		printf("%d\n", he->n);
		num++;
		he = he->next;
	}

	return (num);
}

