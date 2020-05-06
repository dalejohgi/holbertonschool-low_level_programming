#include "lists.h"

/**
 * print_dlistint -
 *
 * Return: 
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;
	dlistint_t *tmp;

	*tmp = h;

	while (tmp->next != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	return (i);
}