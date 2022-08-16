#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*add_nodeint - Function that add a new node at the beginning
*of a singly linked list
*@head: The head of the list
*@n: Parameter to add
*
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!newNode)
		return (NULL);

	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
