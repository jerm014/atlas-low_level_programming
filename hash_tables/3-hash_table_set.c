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
	char *new_key;
	char *new_value;
	int index;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL || table == NULL || key == NULL || value == NULL)
		return (NULL);

	index = key_index(key, table->size);
	temp_node = table->array[index];
	
	new_node->key = malloc(strlen(key) + 1);
	if (new_node->key == NULL)
		return (NULL);
	
	new_node->value = malloc(strlen(value) + 1);
	if (new_node->value == NULL)
		return (NULL);

	new_node->key = strcpy(new_node->key, key);
	new_node->value = strcpy(new_node->value, value);
	new_node->next = NULL;

	if (table->array[index] == NULL)
		table->array[index] = new_node;
	else
	{
		while (temp_node->next)
			temp_node = temp_node->next;

		temp_node->next = new_node;	
	}

	return (1);
}