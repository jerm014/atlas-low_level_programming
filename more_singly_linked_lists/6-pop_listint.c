#include "lists.h"

/**
 * pop_listint- a function that deletes the head node of a listint_t linked
 *              list, and returned the head node's data
 *
 * @node:       the head node of a listint_t list
 *
 * Return:      n value from node
 *
 */

int pop_listint(listint_t **node)
{
	listint_t *temp_node;
	int n = 0;

	if (*node != NULL)
	{
		temp_node = *node;
		n = temp_node->n;
		*node = temp_node->next;
		free(temp_node);
	}

	return (n);
}
