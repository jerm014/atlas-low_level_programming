#include "hash_tables.h"

/**
 * hash_table_create- create a hash table
 *
 * @size:             the size of the array
 *
 * Return:            pointer to the new array
 *
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *array;

	array = malloc(sizeof(hash_table_t));
	if (array == NULL)
		return (NULL);
	
	array->size = size;
	return (array);
}
