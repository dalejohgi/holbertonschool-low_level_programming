#include "lists.h"
/**
 *add_nodeint - Add node of integers at the begining
 *@head: pointer to head
 *@n: Integer to store
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
