#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid
 * passwords for the program 101-crackme
 * program that generates random valid passwords for the program 101-crackme.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pass[100];
	int j, sum, num;

	sum = 0;	

	srand(time(NULL));

	for (j = 0; j < 100; j++)
	{
		pass[j] = rand() % 78;
		sum += (pass[j] + '0');
		putchar(pass[j] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			num = 2772 - sum - '0';
			sum += num;
			putchar(num + '0');
			break;
		}
	}

	return (0);
}
