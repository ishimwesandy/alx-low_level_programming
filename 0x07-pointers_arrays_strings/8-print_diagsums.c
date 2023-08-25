#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * @arr: input
 * @s: input
 * Return: Always 0 (Success)
 */
void print_diagsums(int *arr, int s)
{
	int sum1, sum2, y;

	sum1 = 0;
	sum2 = 0;

	for (y = 0; y < s; y++)
	{
		sum1 = sum1 + arr[y * s + y];
	}

	for (y = s - 1; y >= 0; y--)
	{
		sum2 += arr[y * s + (s - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
