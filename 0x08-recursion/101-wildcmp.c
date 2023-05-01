#include "main.h"

/**
 * wildcmp - Compare strings
 * @x1: pointer to string params
 * @x2: pointer to string params
 * function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.
 * Return: 0
 */

int wildcmp(char *x1, char *x2)
{
	if (*x1 == '\0')
	{
		if (*x2 != '\0' && *x2 == '*')
		{
			return (wildcmp(x1, x2 + 1));
		}
		return (*x2 == '\0');
	}

	if (*x2 == '*')
	{
		return (wildcmp(x1 + 1, x2) || wildcmp(x1, x2 + 1));
	}
	else if (*x1 == *x2)
	{
		return (wildcmp(x1 + 1, x2 + 1));
	}
	return (0);
}

