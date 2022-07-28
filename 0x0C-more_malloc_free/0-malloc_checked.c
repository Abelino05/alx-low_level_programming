#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Function that allocate memory using malloc
 * @b: Size to allocate
 * 
 * Return: Apointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *mem;
	
	mem = malloc(b);
	if (mem = NULL)
		exit (98);
	return (mem);
}
