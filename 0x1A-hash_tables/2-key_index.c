#include "hash_tables.h"

/**
 * key_index - generates index
 * @key: the key to generate from
 * @size: to make with in certain range
 * Return: unsigned long int value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
