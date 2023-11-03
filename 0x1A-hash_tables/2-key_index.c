#include "hash_tables.h"

/**
 * key_index - A function that gives the index of a key.
 * @key: The key to the index
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value pair should be stored in the array hash.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
