#include "hash_tables.h"

/**
 * hash_table_delete - this function deletes node
 * @ht: to delete
 * Return: really nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *todelete, *inter;
	unsigned int i = 0, j;

	while (i < ht->size)
	{
		todelete = ht->array[i];
		for (j = 0; todelete; j++)
		{
			inter = todelete;
			todelete = todelete->next;
			free(inter->value);
			free(inter->key);
			free(inter);
		}
		ht->array[i] = NULL;
		i = i + 1;
	}
	free(ht->array);
	free(ht);
}
