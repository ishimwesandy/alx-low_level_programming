#include "main.h"
/**
 * leet - encode into 1337 speaks
 * @num: input value
 * Return: num value
 */
char *leet(char *num)
{
	int i, j;
	char str1[] = "aAeEoOtTlL";
	char str2[] = "4433007711";

	for (i = 0; num[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (num[i] == str1[j])
			{
				num[i] = str2[j];
			}
		}
	}
	return (num);
}
