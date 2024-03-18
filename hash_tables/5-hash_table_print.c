#include "hash_tables.h"

/**
 * hash_table_print- print the contents of a hash table.
 * 
 * @table:           the hash table to print
 * 
 * Return:           nothing
*/

void hash_table_print(const hash_table_t *table)
{
	unsigned long int index = 0;
	hash_node_t *node;
	int first = 1;

	printf("{");
	if (table != NULL)
	{
		while (index < table->size)
		{
			if (table->array[index] != NULL)
			{
				node = table->array[index];
				while (node)
					{
						if (!first)
							printf(", ");
						printf("'%s': '%s'", node->key, node->value);
						first = 0;
						node = node->next;
					}
			}
			index++;
		}
	}
	printf("}");
}
