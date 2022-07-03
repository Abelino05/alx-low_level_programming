#include <stdio.h>

/**
 * main - Prints numbers of base 16 in lowercase
 * Return: 0 if success
 */

int main(void)
{
	char i, c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
