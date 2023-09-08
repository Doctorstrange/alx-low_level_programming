#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash
 * @ht: pointer to hash table
 * Description: value pairs printed in order they appear
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *place;
	unsigned long int x;
	unsigned char point = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			if (point == 1)
			{
				printf(", ");
			}

			place = ht->array[x];
			while (place != NULL)
			{
				printf("'%s': '%s'", place->key, place->value);
				place = place->next;
				if (place != NULL)
					printf(", ");
			}
			point = 1;
		}
	}
	printf("}\n");
}
