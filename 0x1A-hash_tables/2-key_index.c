#include "hash_tables.h"

/**
 * key_index - finds index of key in hash table
 *
 * @key: Immutable key for each element
 * @size: size of hash table
 * Return: array index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
