#include "main.h"

/**
 * _isalpha - Check if a letter in lowercase or uppercase
 * @c: The character to check
 *
 * Return: 1 if a letter otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
