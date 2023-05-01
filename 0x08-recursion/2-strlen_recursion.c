#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @c: The string to be measured.
 * function that returns the length of a string.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *c)
{
	int longits = 0;

	if (*c)
	{
		longits++;
		longits += _strlen_recursion(c + 1);
	}

	return (longits);
}

