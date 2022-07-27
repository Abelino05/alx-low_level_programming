#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer toa newly allocated space in memory
 * @str: Pointer to string being allocated
 *
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *nstr;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;

	while (str[len] != '\0')
		len++;

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}
	nstr[len] = '\0';
	return (nstr);
}
