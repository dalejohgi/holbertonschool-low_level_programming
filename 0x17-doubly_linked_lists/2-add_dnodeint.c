#include "lists.h"

/**
 * add_dnodeint - Add a node at the beggining of a list
 *@head: Double pointer to the list
 *@n: value to add
 * Return: Pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = *head;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
	}
	else
	{
		new->next = *head;
		*head = new;
	}
	return (new);
}
