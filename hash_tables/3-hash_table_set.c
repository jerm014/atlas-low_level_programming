#ifndef _3_HASH_TABLE_SET_C_
#define _2_HASH_TABLE_SET_C_
#include "hash_tables.h"

#include "0-hash_table_create.c"
#include "1-djb2.c"
#include "2-key_index.c"
#include "3-main.c"

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
	unsigned long int index;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || table == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, table->size);

	if (replace_node_by_key(table->array[index], key, value))
		return (1);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
 
	if (table->array[index] == NULL)
	{
		new_node->next = NULL;
		table->array[index] = new_node;
	}
	else
	{
		new_node->next = table->array[index];
		table->array[index] = new_node;
	}

	return (1);
}

/**
 * replace_node_by_key- find and replace the node value if a matching node key
 *                      is found
 *
 * @node:               the head node in a singly linked list
 * @key:                the key to match
 * @value:              the value to replace
 *
 * Return:              1 success, 0 fail
 *
 */

int replace_node_by_key(hash_node_t *node, const char *key, const char *value)
{
	hash_node_t *temp_node = node;

	if (node == NULL)
		return (0);

	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}
	return (0);

}
#endif
