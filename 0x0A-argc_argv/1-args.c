#include <stdio.h>

/**
 * main - Function that prints the number of arguments passed into it
 * You program should print a number follow by a new line
 * @argc: Tha argument counter
 * @argv: The argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void)argv;
	return (0);
}
