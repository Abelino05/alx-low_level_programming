#include "main.h"

#include <stdio.h>

/**
 * print_array - Print elements in an array
 * @a: pointer to array
 * @n: number of array elements
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
