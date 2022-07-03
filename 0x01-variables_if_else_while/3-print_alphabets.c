#include <stdio.h>

/**
 * main - Prints alphabets in lowercase and uppercase
 * Return: 0 if success
 */

int main(void)
{
	char c, m;
	
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (m = 'A'; m <= 'Z'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
