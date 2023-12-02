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
	int rt = 0;
	hash_node_t *exists, *create_new;
	char *cp;

	cp = strdup(value);
	if (!cp)
		return (0);
	if (*key == '\0' || !ht || !key || !value)
	{
		free(cp);
		return (0);
	}

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		exists = ht->array[index];
		while (exists)
		{
			if(strcmp(exists->key,key) == 0)
			{
				free(exists->value);
				exists->value = cp;
				return 1;
			}
			exists = exists->next;
		}
	} 
	else
	{
		create_new = malloc(sizeof(hash_node_t));
		if (!create_new)
		{
			rt = 0;
			free(cp);
			return (0);
		}
		create_new->key = strdup(key);
		if (!create_new->key)
		{
			rt = 0;
			free(create_new);
			return (0);
		}
		create_new->next = ht->array[index];
		create_new->value = cp;
		ht->array[index] = create_new;
		rt = 1;
	}
	return (rt);
}
