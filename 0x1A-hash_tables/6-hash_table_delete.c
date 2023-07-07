#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: pointer to a hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int count;

	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count])
		{
			while (ht->array[count])
			{
				temp = ht->array[count]->next;
				free(ht->array[count]->key);
				free(ht->array[count]->value);
				free(ht->array[count]);
				ht->array[count] = temp;
			}
		}
	}
	free(ht->array);
	free(ht);
}
