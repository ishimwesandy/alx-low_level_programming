#include "main.h"
/**
 * print_chessboard - Entry point
 * @arr: array
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*arr)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(arr[i][j]);
		_putchar('\n');
	}
}
