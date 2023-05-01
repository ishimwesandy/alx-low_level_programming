#include "main.h"

/**
 * print_array - a function that prints n elements of an array
 * @a: array name
 *function that prints n elements of an array of integers, followed by a new line.
 *
 * @num: is the number of elements OF the array to be printed
 * Return: a and n inputs
 */
void print_array(int *a, int num)
{
	int j;

	for (j = 0; j < (num - 1); j++)
	{
		printf("%d, ", a[j]);
	}
		if (j == (num - 1))
		{
			printf("%d", a[num - 1]);
		}
			printf("\n");
}

