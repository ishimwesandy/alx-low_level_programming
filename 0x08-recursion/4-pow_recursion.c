#include "main.h"

/**
 * _pow_recursion - returns the value of a raised to the power of b
 * @a: value to raise
 * @b: power
 *  function that returns the value of a raised to the power of b
 *
 * Return: result of the power
 */
int _pow_recursion(int a, int b)
{
	if (a < 0)
		return (-1);
	if (b == 0)
		return (1);
	return (a * _pow_recursion(a, b - 1));
}

