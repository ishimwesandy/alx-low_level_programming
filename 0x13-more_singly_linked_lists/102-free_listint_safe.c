#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @he: pointer to the first node in the linked list
 * function that prints a listint_t linked list.
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **he)
{
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!he || !*he)
		return (0);

	while (*he)
	{
		diff = *he - (*he)->next;
		if (diff > 0)
		{
			temp = (*he)->next;
			free(*he);
			*he = temp;
			len++;
		}
		else
		{
			free(*he);
			*he = NULL;
			len++;
			break;
		}
	}

	*he = NULL;

	return (len);
}

