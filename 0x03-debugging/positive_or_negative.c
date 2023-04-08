#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Determines if a number is positive, negative or zero.
 * change the method name to positive_or_negative 
 * Return: Always 0 (Success)
 */
void positive_or_negative(int a)
{

	if (a > 0)
	{
		printf("%d is positive\n", a);
	}
	else if (a == 0)
	{
		printf("%d is zero\n", a);
	}
	else
	{
		printf("%d is negative\n", a);
	}
}

