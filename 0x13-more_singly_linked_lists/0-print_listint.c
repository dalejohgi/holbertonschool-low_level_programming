#include "lists.h"
/**
 *print_listint - Print elements of a linked list
 *@h: Pointer to the list
 *Return: size of list
 *
 *
 *
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *tmp;
	int i = 1;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp->next != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		i++;
	}
	printf("%d\n", tmp->n);
	return (i);
}
