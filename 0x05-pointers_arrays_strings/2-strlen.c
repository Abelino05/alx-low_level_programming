#include "main.h"

/**
 * _strlen - Return the length of a string
 *@s: String to check
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len;

	for (*s != '\0'; *s += 1)
	{
		len += 1;
	}
	return (len);
}
