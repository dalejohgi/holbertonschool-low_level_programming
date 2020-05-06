#include "lists.h"

/**
 * print_dlistint - Print a double linked list
 * @h: Pointer to the list to print
 * Return: Counter of elements printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
