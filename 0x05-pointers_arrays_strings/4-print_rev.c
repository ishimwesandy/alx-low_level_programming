#include "main.h"
/**
 * print_rev - imprime en reverse
 * function that prints a string, in reverse, followed by a new line.
 *
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longis = 0;
	int o;

	while (*s != '\0')
	{
		longis++;
		s++;
	}
	s--;
	for (o = longis; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
