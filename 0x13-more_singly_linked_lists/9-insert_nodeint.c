#include "lists.h"
/**
 *insert_nodeint_at_index - Insert node at index
 *@head: Pointer to the list
 *@idx: Position to index the node initializated in zero
 *@n: value to put on the node
 *Return: Adress of new node if success, NULL if not
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int comparator = 0;
	listint_t *searcher, *node;

	if (head == NULL)
		return (NULL);

	searcher = *head;
	while (searcher != NULL && comparator != idx - 1)
	{
		searcher = searcher->next;
		comparator++;
	}
	if (searcher == NULL)
		return (NULL);

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = searcher->next;
	searcher->next = node;
	return (node);
}
