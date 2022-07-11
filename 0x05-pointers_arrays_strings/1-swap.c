#include "main.h"

/**
 * swap_int - swap two integers
 * @a: first parameter
 * @b: second parameter
 */

void swap_int(int *a, int *b)
{
	int i = *a;

	*a = b;
	*b = i;
}
