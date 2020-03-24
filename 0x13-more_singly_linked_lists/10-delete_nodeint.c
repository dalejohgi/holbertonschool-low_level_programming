#include "lists.h"
/**
 *delete_nodeint_at_index - Delete node at index
 *@index: Position of the node to delete
 *Return: 1 if success or -1 if not
 *@head: pointer to the list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int comparator = 0;
	listint_t *searcher, *saver;

	if (head == NULL || *head == NULL)
		return (-1);

	searcher = *head;
	if (index == 0)
	{
		saver = (*head)->next;
		free(searcher);
		*head = saver;
		return (1);
	}
	while (searcher->next != NULL && comparator < index - 1)
	{
		searcher = searcher->next;
		comparator++;
	}
	if (searcher == NULL)
		return (-1);

	saver = searcher->next;
	searcher->next = saver->next;
	free(saver);
	return (1);

}
