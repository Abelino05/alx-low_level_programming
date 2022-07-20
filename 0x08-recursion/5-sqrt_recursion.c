#include "main.h"

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - Function that returns the natural square root ofa number
 * @n: The number to be squared
 *
 * Return: Natural square root of a number
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - recursive square root
 *@n: number
 *@i: Iterator
 *Return: an integer
 */

int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
	{
		return (-1);
	}
	else if (square == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt(n, i + 1));
	}
}
