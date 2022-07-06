#include "main.h"

/**
 * print_alphabet_x10 - Print ths alphabet 10 time
 */

void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
