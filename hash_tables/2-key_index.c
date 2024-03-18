#ifndef _2_KEY_INDEX_C_
#define _2_KEY_INDEX_C_
#include "hash_tables.h"

/**
 * key_index- find the index for a given key
 *
 * @key:      the key
 * @size:     the size of the thing
 *
 * Return:    unsigned long int index for key
 *
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
#endif
