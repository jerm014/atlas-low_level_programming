#include "hash_tables.h"

/**
 * hash_table_delete- free memory from a hash table
 *
 * @table:            the hash table to delete
 *
 * Return:            nothing
 *
*/

void hash_table_delete(hash_table_t *table)
{
	unsigned long int i = 0;

	while (i < table->size)
	{
		if (table->array[i])
			free_hash_node_t(table->array[i]);
	}
	free(table);
}

/**
 * free_hash_node_t- free a list of linked hash nodes
 *
 * @node:            the head node of a listint_t list
 *
 * Return:           nothing
 *
 */

void free_hash_node_t(hash_node_t *node)
{
	hash_node_t *temp_node;

	while (node)
	{
		temp_node = node;
		node = node->next;
		free(temp_node);
	}
}