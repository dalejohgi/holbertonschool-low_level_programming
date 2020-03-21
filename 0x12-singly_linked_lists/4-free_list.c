#include "lists.h"
/**
 *free_list - Free a linked list
 *@head: Pointer to the head of the list
 *
 *
 *
 */
void free_list(list_t *head)
{
	list_t *tmp, *aux;

	tmp = head;
	while (tmp != NULL)
	{
		aux = tmp->next;
		free(tmp->str);
		free(tmp);
		tmp = aux;
	}

}
