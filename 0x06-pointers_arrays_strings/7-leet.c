#include "main.h"

/**
 * leet - Function that encode a string
 * @str: String that will be encodedd
 *
 * Return: Encoded string
 */

char *leet(char *str)
{
	int index1 = 0;
	int index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[++index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if  (str[index1] == leet[index2] ||
					str[index1] - 32 ==
					leet[index2])
				str[index1] = index2 + '0';
		}
	}
	return (str);
}
