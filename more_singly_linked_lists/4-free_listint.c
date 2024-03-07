#include "lists.h"

/**
 * free_listint- free a lintint_t list
 *
 * @node:        the head node of a listint_t list
 *
 * Return:       nothing
 *
 */

void free_listint(listint_t *node)
{
	listint_t *temp_node;

	while (node)
	{
		temp_node = node;
		node = node->next;
		free(temp_node);
	}
}
