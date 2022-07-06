#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: The number to check
 *
 * Return: The modulos by 10
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -n;
		return (n % 10);
	}
	else
	{
		return (n % 10);
	}
}
