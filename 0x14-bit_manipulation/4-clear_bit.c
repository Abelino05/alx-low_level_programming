#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - sets index to 0
 * @n: contains the decimal number
 * @index: contains the index
 * Return: the converted number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
