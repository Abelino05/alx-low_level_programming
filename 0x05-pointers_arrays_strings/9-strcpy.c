#include "main.h"

/**
 * _strcpy - copy the string pointed to
 *@dest: first parameter
 *@src: second parameter
 *Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
