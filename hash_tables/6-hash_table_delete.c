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
		/* if (i % 75 == 0) */
		/*	printf("free %lu\n", i); */
		if (table->array[i])
			hash_node_delete(table->array[i]);

		i++;
	}
	/*printf("free table\n");*/
	free(*table->array);
	free(table->array);
	free(table);
}

/**
 * hash_node_delete- free a list of linked hash nodes
 *
 * @node:            the head node of a listint_t list
 *
 * Return:           nothing
 *
 */

void hash_node_delete(hash_node_t *node)
{
	hash_node_t *temp_node;

	while (node)
	{
		temp_node = node;
		node = node->next;
		/*printf("freeing node %s", temp_node->key);*/
		free(temp_node->key);
		free(temp_node->value);
		free(temp_node);
	}
}
