#include "hash_tables.h"


hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_new;
	unsigned int i = 0;

	if ((hash_new = malloc(sizeof(hash_table_t))) == NULL)
		return NULL;

	if ((hash_new->array = malloc(size * sizeof(hash_node_t *))) == NULL)
	{
		return NULL;
	}
	hash_new->size = size;

	while (i < size)
	{
		hash_new->array[i] = NULL;
		i = i + 1;
	}
	return (hash_new);
}
