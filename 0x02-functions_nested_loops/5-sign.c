#include "main.h"

/**
 * print_sign - Prints sign o the given number
 * @n: The number to check
 *
 * Return: 1 if greater than 0, 0 if equal 0 and -1 if less than 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
