/**
 * main - Prints excatly and that piece of art is usefuland that piece of art is useful
 * Dora Korpar, 2015-10-19
 *
 * Return: 0 at the end
 */

#include <stdio.h>
#include <unistd.h>

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}

