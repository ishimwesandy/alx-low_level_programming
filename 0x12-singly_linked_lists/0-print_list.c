#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @he: pointer to the list_t list to print
 * function that prints all the elements of a list_t list.
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *he)
{
	size_t t = 0;

	while (he)
	{
		if (!he->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", he->len, he->str);
		he = he->next;
		t++;
	}

	return (t);
}

