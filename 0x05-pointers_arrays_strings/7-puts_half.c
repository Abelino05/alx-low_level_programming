#include "main.h"

#include <string.h>

/**
 * puts_half - Prints the half oa a string
 * @str: String to print
 */

void puts_half(char *str)
{
	int i;
	int j;
	int x;

	i = strlen(str);
	if (i % 2 == 1)
	{
		j = i / 2 + 1;
	}
	else
	{
		j = i / 2;
	}
	for (x = j; x < i; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
