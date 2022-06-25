/**
 * main - Print sizes of variables
 *
 * Return: 0 at the end
 */
#include <stdio.h>

int main(void)
{
	char my_char;
	int my_int;
	long my_long_int;
	double my_double;
	float my_float;

	printf("Size of a char: %lu byte(s)\n", (unsigned int)sizeof(my_char));
	printf("Size of an int: %d byte(s)\n", sizeof(my_int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(my_long_int));
	printf("Size of a long long int: %lu byte(s)\n",
			(unsigned int)sizeof(my_double));
	printf("Size of a float: %lu byte(s)\n", (unsigned int)sizeof(my_float));
}

