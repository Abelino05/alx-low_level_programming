#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
*add_nodeint_end - Function that add a node at the end of a singly linked list
*@head: Header of the list
*@n: Parameter to add
*
*Return: the address of the new element, or NULL if it failed
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
  listint_t *newNode, *lastNode;
  
  newNode = (listint_t *)malloc(sizeof(listint_t));
  lastNode = (*head);
  
  if (!newNode)
    return (NULL);

  newNode->n = n;
  newNode->next = NULL;

  if (!(*head))
  {
    (*head) = newNode;
    return (*head);
  }

  while (lastNode->next)
    {
      lastNode = lastNode->next;
    }
  lastNode->next = newNode;
  return (newNode);
}