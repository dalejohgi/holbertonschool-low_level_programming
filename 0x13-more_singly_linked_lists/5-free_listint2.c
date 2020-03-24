#include "lists.h"
/**
 *free_listint2 - Free list of ints
 *@head: pointer to the head element of the list
 *
 *
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *saver;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		saver = (*head)->next;
		free(*head);
		*head = saver;
	}
	*head = NULL;
}
