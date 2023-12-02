#include "hash_tables.h"

/**
 * hash_table_set - inserts new key
 * @ht: the hash table
 * @key: the key to insert
 * @value: the value to insert
 * Return: this function return 1 if success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *exists,  *rt;

	if (*key == '\0' || !ht || !key || !value)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		exists = ht->array[index];
		while (exists)
		{
			if (strcmp(exists->key, key) == 0)
			{
				free(exists->value);
				exists->value = strdup(value);
				return (1);
			}
			exists = exists->next;
		}
	}
	if (!ht->array[index])
	{
jump:		rt = create_node(key, value, ht, index);

		if (!rt)
		{
			return (0);
		}
		return (1);
	}
	goto jump;
}
