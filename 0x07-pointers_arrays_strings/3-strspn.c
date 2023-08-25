#include "main.h"
/**
 * _strspn - Entry point
 * @str: input
 * @acc: input
 * Return: Always 0 (Success)
 */
unsigned int _strspn(char *str, char *acc)
{
	unsigned int num = 0;
	int r;

	while (*str)
	{
		for (r = 0; acc[r]; r++)
		{
			if (*str == acc[r])
			{
				num++;
				break;
			}
			else if (acc[r + 1] == '\0')
				return (num);
		}
		str++;
	}
	return (num);
}
