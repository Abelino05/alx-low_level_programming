#include "main.h"

/**
 * print_chessboard - Function that prints the chessboard
 * @a: Array of pointers
 *
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i <= 7; i++)
	{
		for (j = 0; j <= 7; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar(10);
	}
}
