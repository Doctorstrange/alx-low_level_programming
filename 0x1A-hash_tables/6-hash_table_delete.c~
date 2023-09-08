#include "hash_tables.h"

/**
 * hash_table_delete - Deletes hash table.
 * @ht: pointer to hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *place, *table;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			place = ht->array[x];
			while (place != NULL)
			{
				table = place->next;
				free(place->key);
				free(place->value);
				free(place);
				place = table;
			}
		}
	}
	free(head->array);
	free(head);
}
