#include "hash_tables.h"


/**
 * hash_table_get - gets value of certain key
 * @ht: the hash table
 * @key: the key for finding
 * Return: the pointer to the found key
 */


char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int i;
	unsigned long int place;
	hash_node_t *finder;

	if (*key == '\0')
		return (NULL);
	if (!key)
		return (NULL);
	if (!ht)
		return (NULL);

	place = key_index((const unsigned char *)key, ht->size);
	finder = ht->array[place];

	for (i = 0; finder; i++)
	{
		if (strcmp(finder->key, key) == 0)
		{
			return (finder->value);
		}
		finder = finder->next;
	}
	return (NULL);
}

