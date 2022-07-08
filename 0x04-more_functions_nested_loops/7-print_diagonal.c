#include "main.h"

/**
 * print_diagonal - Print lines
 * @n: number of line
 * Return: 0
 */

void print_diagonal(int n)
{
	int j;
	int k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k <= j; k++)
			{
				_putchar(' ');
			}
			_putchar (92);
			_putchar ('\n');
		}
		_putchar('\n');
	}
}

