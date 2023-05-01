#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @num: number to return the factorial from
 *  function that returns the factorial of a given number.
 *
 * Return: factorial of number
 */
int factorial(int num)
{
	if (num < 0)
		return (-1);
	if (num == 0)
		return (1);
	return (num * factorial(num - 1));
}

