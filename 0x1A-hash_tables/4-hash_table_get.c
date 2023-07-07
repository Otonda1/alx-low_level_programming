#include "hash_tables.h"

/**
 * hash_table_get - retrieves a key's value
 *
 * @ht: pointer to hash table
 * @key: key in question
 * Return: pointer to value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (ht == NULL || key == NULL || strlen(key) == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
