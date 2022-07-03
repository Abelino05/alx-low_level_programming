#include <stdio.h>

/**
 * main - Prints alphabets in lowercase using putchar
 * Return: 0 if success
 */

int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
}
