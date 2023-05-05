#include "hash_tables.h"

/**
 * hash_table_create - A function that creates a hash table
 * @size: The size of the array
 * Return: A pointer or Error
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int y;

	if (!size)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	ht->size = size;

	y = 0;
	while (y < size)
	{
		ht->array[y] = NULL;
		y++;
	}

	return (ht);
}
