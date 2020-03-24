#include "lists.h"
/**
 *sum_listint - Sum the values of a list
 *@head: Pointer to the list
 *Return: Result of the sum
 */
int sum_listint(listint_t *head)
{
	listint_t *aux;
	int result = 0;

	if (head == NULL)
		return (0);

	aux = head;
	while (aux->next != NULL)
	{
		result += aux->n;
		aux = aux->next;
	}
	result += aux->n;
	return (result);
}
