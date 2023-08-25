#include "main.h"
/**
 * reverse_array function - reverse array of integers
 * @arr: array
 * @num: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *arr, int num)
{
	int i;
	int trav;

	for (i = 0; i < num--; i++)
	{
		trav = arr[i];
		arr[i] = arr[num];
		arr[num] = trav;
	}
}
