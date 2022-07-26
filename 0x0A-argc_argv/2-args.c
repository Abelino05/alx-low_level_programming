#include <stdio.h>

/**
 * main - Function that prints all arguments it receives
 * All arguments should be printed, including the first argument
 * Only print one argument per line, ending by a new line
 * @argc: The argument counter
 * @argv: The argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);

	}
	return (0);
}
