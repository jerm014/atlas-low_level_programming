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
	unsigned long int index;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || table == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, table->size);

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
		delete_node_by_key(&(table->array[index]), key);
		new_node->next = table->array[index];
		table->array[index] = new_node;
	}

	return (1);
}

/**
 * delete_node_by_key- delete the node at index of a listint_t linked list
 *
 * @node:              the head node in a linked list
 * @index:             the index of the node to delete, 0 based
 *
 * Return:             1 success, -1 fail
 *
 */

int delete_node_by_key(hash_node_t **node, char *key)
{
	unsigned int count = 0;
	hash_node_t *temp_node = *node;
	hash_node_t *delete_node;

	if (*node == NULL)
		return (-1);

	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
			break;
		temp_node = temp_node->next;
	}

	if (temp_node)
	{
		delete_node = temp_node->next;
		temp_node->next = delete_node->next;
		free(delete_node);
		return (1);
	}

	return (-1);

}
