#include "main.h"

#include <string.h>

/**
 * rev_string - Prints the string in reverse
 * @s: The string to print
 */

void rev_string(char *s)
{
	int i;
	int j;
	int k;
	int temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
