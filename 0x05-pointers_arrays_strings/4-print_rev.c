#include "main.h"

#include <string.h>

/**
 * print_rev - Print string in reverse
 * @s: String as parameter
 */

void print_rev(char *s)
{
	int i;
	int n = strlen(s);

	for (i = n - 1; n >= 0; n--)
	{
		_putchar(*s);
	}
	_putchar('\n');
}
