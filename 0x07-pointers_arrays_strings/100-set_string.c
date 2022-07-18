#include "main.h"

/**
 * set_string - Sets the value of a pointer to char
 * @s: Pointer to pointer
 * @to: Pointer to char
 *
 * Return: 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
