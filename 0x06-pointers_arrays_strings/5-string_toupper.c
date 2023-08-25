#include "main.h"
/**
 * string_toupper - function change all lowercase to uppercase
 * @num: pointer
 *
 * Return: num
 */
char *string_toupper(char *num)
{
	int i;

	i = 0;
	while (num[i] != '\0')
	{
		if (num[i] >= 'a' && n[i] <= 'z')
			num[i] = num[i] - 32;
		i++;
	}
	return (num);
}
