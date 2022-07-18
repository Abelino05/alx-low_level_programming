#include "main.h"

#include <stdio.h>

/**
 * _strpbrk - Function that search for a string
 * @s: String to search
 * @accept: Searching string
 *
 * Return: a pointer to the byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				break;
			}
		}
		if (*(accept + j) != '\0')
		{
			return (s + i);
		}
	}
	return (0);
}
