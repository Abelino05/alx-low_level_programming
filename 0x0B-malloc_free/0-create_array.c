#include "main.h"
#include <stdlib.h>

/**
 * create_array - create an array of chars and initializes it with a
 * specific char
 * @size: Size of array
 * @c: Char to initialize array with
 *
 * Return: NULL if it fails or pointer if success
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
