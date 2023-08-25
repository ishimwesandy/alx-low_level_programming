#include "main.h"

/**
 * _strspn - finds the length of a prefix substring
 * @str: the string
 * @acc: the characters that are being matched
 * Return: the length of a prefix substring
 */
unsigned int _strspn(char *str, char *acc)
{
	char *p = str;
	char *o = acc;
	int l = 0, i, j;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (l != i)
			break;
		for (j = 0; o[j] != '\0'; j++)
		{
			if (p[i] == o[j])
				l++;
		}
	}
	return (l);
}
