#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String to check
 * @c: Character to search
 *
 * Return: A pointer to the first occurrence of the character
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		++s;
	}
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
