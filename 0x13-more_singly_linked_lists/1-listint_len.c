#include "lists.h"
/**
 *listint_len - Return the size of a list
 *@h: Pointer to a linked list
 *Return: Lenght of the list
 *
 *
 *
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp;
	int i = 1;

	if (h == NULL)
		return (0);
	tmp = h;
	while (tmp->next != NULL)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}
