#include <stdlib.h>
#include "lists.h"

/**
 *pop_listint -  Function that deletes the head node of a listint_t
 *linked list, and returns the head node’s data (n)
 * @head: linked lists
 * Return: value
 */
int pop_listint(listint_t **head)
{
	int value = 0;

	listint_t *newNode = NULL;

	if (!*head)
		return (0);

	newNode = (*head)->next;
	value = (*head)->n;
	free(*head);
	(*head) = newNode;

	return (value);
}
