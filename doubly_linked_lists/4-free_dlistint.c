#include "lists.h"

/**
 * free_dlistint- free a dlistint_t list
 *
 * @node:         the head node of a dlistint_t list
 *
 * Return:        nothing
 *
*/

void free_dlistint(dlistint_t *node)
{
	if (node)
	{
		if (node->next != NULL)
			free_dlistint(node->next);

		free(node);
	}
}
