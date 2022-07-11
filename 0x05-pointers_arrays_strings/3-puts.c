#include "main.h"

#include <string>

/**
 * _puts - Prints the string on the stdout
 * @str: The string to print
 * Return: The string
 */

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(str);
	}
	_putchar('\n');
}
