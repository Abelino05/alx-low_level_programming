#include "main.h"

/**
 * cap_string - Function that capitalize first chracter of a word
 *@str: String to capitalize
 * Return: The capitalize string
 */

char *cap_string(char *str)
{
	char spc[] = {32, 9, '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};
	int index = 0;
	int len = 13;
	int i;

	while (str[index])
	{
		i = 0;
		while (i < len)
		{
			if ((index == 0 || str[index - 1] == spc[i])
					&& (str[index] >= 97 && str[index] <= 122))
			{
				str[index] -= 32;
			}
			i++;
		}
		index++;
	}
	return (str);
}
