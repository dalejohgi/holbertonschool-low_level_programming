#include "hash_tables.h"

/**
 * hash_table_create - Function that cretes an empty hash table
 * @size: Size of the array to be created
 * Return: Pointe to the hash table (Success), NUll if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	if (size == 0)
		return (NULL);
	ht = malloc(size);
	if (ht == NULL)
		return (NULL);
	return (ht);
}
