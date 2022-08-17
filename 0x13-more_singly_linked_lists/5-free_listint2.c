#include "lists.h"
/**
 * free_listint2 - Function that frees a linked list
 * @head: linked list
 *
 *Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return;
	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	head = NULL;
}
