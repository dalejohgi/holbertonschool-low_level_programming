#include "hash_tables.h"

/**
 * hash_table_create - Function that cretes an empty hash table
 * @size: Size of the array to be created
 * Return: Pointe to the hash table (Success), NUll if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (!size)
		return (NULL);
	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!ht->array)
	{
		free(ht);
		return (NULL);
	}
	return (ht);
}
