#include "lists.h"
/**
 *get_nodeint_at_index - Get the nth node of a list
 *@index: nth node to look for
 *@head: pointer to the list
 *Return: nth node of the list
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int comparator = 0;
	listint_t *nth;

	if (head == NULL)
	{
		return (NULL);
	}

	nth = head;
	while (nth->next != NULL && comparator != index)
	{
		nth = nth->next;
		comparator++;
	}
	if (comparator == index)
		return (nth);
	else
		return (NULL);
}
