#include "lists.h"
#include <stdlib.h>

/**
*free_listint - Function that free a singly linked list
*@head: Head of the list
*
*Return: void
*/

void free_listint(listint_t *head)
{
	if (head)
	{
		free_listint(head->next);
		free(head);
	}
}
