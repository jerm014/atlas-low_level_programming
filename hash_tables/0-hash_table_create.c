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
	unsigned int i = size;
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
		return (NULL);

	while (i > 0)
		table->array[--i] = NULL;

	return (table);
}
