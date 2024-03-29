#include <stdio.h>
#include "lists.h"

/**
*print_listint - Function that prints all the elements of a listint_t list
*@h: Listed list
*
*Return: The number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		if (h->n)
		{
			printf("%d\n", h->n);
		}
		h = h->next;
	}
	return (i);
}
