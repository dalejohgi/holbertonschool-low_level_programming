#include "lists.h"

/**
 * dlistint_len - Retunrs the length of a list
 * @h: pointer to the list
 * Return: Length
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
