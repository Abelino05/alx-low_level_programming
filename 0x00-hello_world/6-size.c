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
	long my_llong_int;
	float my_float;

	printf("Size of a char : %c byte(s)\n", sizeof(my_char));
	printf("Size of an int : %d byte(s)\n", sizeof(my_int));
	printf("Size of a long int : %ld byte(s)\n", sizeof(my_long_int));
	printf("Size of a long long int : %ld byte(s)\n", sizeof(my_llong_int));
	printf("Size of a float : %f byte(s)\n", sizeof(my_float));
}

