#include "lists.h"
/**
 *list_len - Count the number of elements in a list
 *@h: Pointer to struct
 *Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	const list_t *temporary = h;
	int i = 0;

	while (temporary !=  NULL)
	{
		temporary = temporary->next;
		i++;
	}

	return (i);
}
