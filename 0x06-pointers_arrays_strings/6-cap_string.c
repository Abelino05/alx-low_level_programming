#include "main.h"

/**
 * cap_string - Function that capitalize first chracter of a word
 *@str: String to capitalize
 * Return: The capitalize string
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		{
			if (str[index - 1] == ' ' ||
					str[index - 1] == '\t' ||
					str[index - 1] == '\n' ||
					str[index - 1] == ',' ||
					str[index - 1] == ';' ||
					str[index - 1] == '.' ||
					str[index - 1] == '!' ||
					str[index - 1] == '?' ||
					str[index - 1] == '"' ||
					str[index - 1] == '(' ||
					str[index - 1] == ')' ||
					str[index - 1] == '{' ||
					str[index - 1] == '}')
				str[index] -= 32;
		}
		index ++;
	}
	return (str);
}
