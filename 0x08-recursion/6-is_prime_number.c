#include "main.h"

/**
 * is_prime_number - Function that checks for prime numbers
 * @n: NUmber to check
 *
 * Return: 1 if prime number else 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (prime(n, 2));
	}
}

/**
 * prime - returns 0 or 1
 * @num: Number being checked
 * @i: possible factor of the number
 *
 * Return: 0 if not prime, 1 if prime
 */

int prime(int num, int i)
{
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
		else
		{
			return (prime(num, i + 1));
		}
	}
	else
	{
		return (1);
	}
}
