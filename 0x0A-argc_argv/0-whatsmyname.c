#include <stdio.h>

/**
 * main - Program that prints its name followed by a new line
 * If you rename the program, it will print the new name
 * without have to compile it again
 * You should not remove the path before the name of the program
 * @argc: The argument count
 * @argv: The argument array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
