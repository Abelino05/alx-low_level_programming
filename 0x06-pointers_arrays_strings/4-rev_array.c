#include "main.h"

/**
 * reverse_array - Function that reverse content of array
 * @a: array to reverse
 * @n: number of elements
 *
 * Return: Reversed array
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
