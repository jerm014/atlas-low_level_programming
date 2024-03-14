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
	if (node->next != NULL && node)
		free_dlistint(node->next);

	free(node);
}
