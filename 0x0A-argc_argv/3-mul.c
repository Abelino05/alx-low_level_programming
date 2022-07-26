#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that multiplies two numbers
 * You program should print the result of the multiplication
 * followed by a new line
 * You can assume that the two numbers and the result can
 * be stored in an integer
 * If the program does not receive two numbers, your program should print error
 * followed by a new line and return 1
 *@argc: The argument count
 *@argv: The argument array
 *
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i;
	int result;

	result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		result = result * atoi(argv[i]);
		printf("%d\n", result);
		return (0);
	}
}
