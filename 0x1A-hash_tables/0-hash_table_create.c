#include "hash_tables.h"

/**
 * hash_table_create - this function creates hash table
 * @size: argument size to specify the array length
 *
 * Return: the pointer to the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_new;
	unsigned int i = 0;

	hash_new = malloc(sizeof(hash_table_t));
	if (hash_new == NULL)
		return (NULL);

	hash_new->array = malloc(size * sizeof(hash_node_t *));
	if (hash_new->array == NULL)
	{
		return (NULL);
	}
	hash_new->size = size;

	while (i < size)
	{
		hash_new->array[i] = NULL;
		i = i + 1;
	}
	return (hash_new);
}
