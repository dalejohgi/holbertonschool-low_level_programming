#include "lists.h"
/**
 *add_node_end - Adds node to the begining of a list
 *@str: String
 *@head: double pointer
 *Return: Pointer to node
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *node;
	list_t *tmp;

	node = malloc(sizeof(list_t));

	if (node == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tmp = *head;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	node->str = strdup(str);
	node->len = len;
	node->next = NULL;
	tmp->next = node;
	return (node);
}
