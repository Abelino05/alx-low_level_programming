#include "main.h"

/**
 * _strlen_recursion - Function that returns the lenght of a string
 * @s: The string to count
 *
 * Return: THe lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return (0);
	}
	else
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
}
