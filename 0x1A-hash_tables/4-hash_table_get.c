#include "hash_tables.h"
/**
 * hash_table_get - Retrieve value
 * @ht: pointer to hash table.
 * @key: The key to get the value
 * Return: the value associated with key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *place;
	unsigned long int index;

	if (ht == NULL || *key == '\0' || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
	{
		return (NULL);
	}
	place = ht->array[index];
	while (place && strcmp(place->key, key) != 0)
	{
		place = place->next;
	}
	return ((place == NULL) ? NULL : place->value);
}
