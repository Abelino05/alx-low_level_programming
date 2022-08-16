#include "lists.h"
#include <stdio.h>

/**
*listint_len-Function that returns the number of elements in
*a linked listint_t list
*@h: List
*
*Return: Number of elements in the list
*/

size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
