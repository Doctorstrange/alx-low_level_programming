#include "hash_tables.h"

/**
 * hash_table_set - update element in a hash table
 * @ht: pointer to the hash table
 * @key: The key to add
 * @value: The value in  key
 *
 * Return: 0 on failure 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new;
	char *val;
	unsigned long int index, x;

	if (ht == NULL || *key == '\0' || value == NULL || key == NULL)
	{
		return (0);
	}
	val = strdup(value);
	if (val == NULL)
	{
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	for (x = index; ht->array[x]; x++)
	{
		if (strcmp(ht->array[x]->key, key) == 0)
		{
			free(ht->array[x]->value);
			ht->array[x]->value = val;
			return (1);
		}
	}

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(val);
		return (0);
	}
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = val;
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
