#include "main.h"
/**
 * puts_half - a function that prints half of a string
 *  if odd len, num = (length_of_the_string - 1) / 2
 *function that prints half of a string, followed by a new line.
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, num, longis;

	longis = 0;

	for (a = 0; str[a] != '\0'; a++)
		longis++;

	num = (longis / 2);

	if ((longis % 2) == 1)
		num = ((longis + 1) / 2);

	for (a = num; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

