#include "lists.h"

/**
 * add_nodeint_end-  add a new node at the end of a listint_t list
 *
 * @node:            the node at the head of the lintint_t list
 * @n:               the number to put in the node
 *
 * Return:           the new node or NULL if this failed
 *
 */

listint_t *add_nodeint_end(listint_t **node, const int n)
{
	listint_t *new_node = NULL;
	listint_t *temp_node;

	if (node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*node == NULL)
		*node = new_node;
	else
	{
		temp_node = *node;
		while (temp_node->next)
			temp_node = temp_node->next;

		temp_node->next = new_node;
	}

	return (new_node);
}
