#include "hash_tables.h"

/**
 * hash_table_print - this function prints the elements
 * @ht: the table
 * Return: it doesnt
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0;
	hash_node_t *pr;
	int comma = 0;

	if (!ht)
		return;


	while (i < ht->size)
	{
		if (i == 0)
			printf("{");
		pr = ht->array[i];
		while (pr)
		{
			if (comma == 1)
				printf(", ");
			printf("'%s': '%s'", pr->key, pr->value);
			comma = 1;
			pr = pr->next;
		}
		i++;
	}
	printf("}\n");
}
