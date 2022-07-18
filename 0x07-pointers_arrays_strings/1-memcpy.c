#include "main.h"

/**
 * _memcpy - Function that copy memory area
 * @dest: String for filling
 * @src: Source string
 * @n: Lenght of buffer
 *
 * Return: A pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
