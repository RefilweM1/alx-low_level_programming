#include "hash_tables.h"
/**
 * key_index-Associates an index to a key.
 * @key:key to be indexed.
 * @size:size of the hashtable.
 * Return:integer after the operations.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	result = hash_djb2(key) % size;
	return (result);
}
