#include "hash_tables.h"

/**
 * hash_table_set- add an element to a hash table
 *
 * @table:         the table to add an element to
 * @key:           the new element key
 * @value:         the new element value
 *
 * Return:         1 success, 0 failure
 *
*/

int hash_table_set(hash_table_t *table, const char *key, const char *value)
{
	hash_node_t *new_node;
	hash_node_t *temp_node;
	unsigned long int index;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || table == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, table->size);
	temp_node = table->array[index];

	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->key = memcpy(new_node->key, key, strlen(key) + 1);
	new_node->value = memcpy(new_node->value, value, strlen(value) + 1);
	new_node->next = NULL;

	if (table->array[index] == NULL)
		table->array[index] = new_node;
	else
	{
		temp_node = table->array[index];
		new_node->next = temp_node;
		table->array[index] = new_node;
	}

	return (1);
}
