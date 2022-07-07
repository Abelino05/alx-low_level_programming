#include "main.h"

/**
 * jack_bauer - Prints minutes in 24h
 */

void jack_bauer(void)
{
	int i;
	int j;

	for (i = 1; i <=24; i++)
	{
		for (j = 0; j <= 60; j++)
		{
			_putchar(i);
			_putchar(':');
			_putchar(j);
		}
		_putchar('\n');
	}
}
