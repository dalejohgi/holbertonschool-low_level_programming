#include "lists.h"
/**
 *pop_listint - Delete the head node.
 *@head: Pointer to head pointer
 *Return: Int value of the node deleted
 *
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *saver;

	value = (*head)->n;
	saver = (*head)->next;
	free(*head);
	*head = saver;
	return (value);
}
