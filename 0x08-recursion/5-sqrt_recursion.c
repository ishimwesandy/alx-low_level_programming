#include "main.h"

int actual_sqrt_recursion(int num, int j);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @num: number to calculate the square root of
 * function that returns the natural square root of a number.
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int num)
{
	if (num < 0)
		return (-1);
	return (actual_sqrt_recursion(num, 0));
}

/**
 * actual_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @ num: number to calculate the sqaure root of
 * @j: iterator
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int num, int j)
{
	if (j * j > num)
		return (-1);
	if (j * j == num)
		return (j);
	return (actual_sqrt_recursion(num, j + 1));
}

