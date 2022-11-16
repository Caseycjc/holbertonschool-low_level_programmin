#include <stdlib.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gives you the index of a key
 * @key: the given key
 * @size: the size of the hash table
 *
 * Return: the index which the key/value pair is stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
