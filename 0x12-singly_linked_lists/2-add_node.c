#include "lists.h"
/**
 *add_node - Adds node to the begining of a list
 *@str: String
 *@head: double pointer
 *Return: Pointer to node
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *node;

	node = malloc(sizeof(list_t));

	if (node == NULL || str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	node->str = strdup(str);
	node->len = len;
	node->next = *head;
	*head = node;
	return (node);
}
