#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Listed lists
 *
 * Return: The number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h)
	{
		count++;
		h->str ? printf("[%d] %s\n", h->len, h->str) :
			printf("[0] (nil)\n");
		h = h->next;
	}

	return (count);
}
