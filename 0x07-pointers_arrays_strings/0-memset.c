#include "main.h"

/**
 * _memset - Function that fills memory
 * @s: Source string
 * @b:Constant byte for filling
 * @n: Lenght of buffer
 *
 * Return: A pointer to the memory pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
