#include "lists.h"

/**
 * add_dnodeint_end- add a new node at the end of a dlistint_t
 *
 * @node:            the head of the linked list
 * @n:               the n value of the new node
 *
 * Return:           the address of the new node or NULL if it failed
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **node, const int n)
{
	dlistint_t *new_node = NULL;
	dlistint_t *temp_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = new_node->prev = NULL;

	if (*node == NULL)
		*node = new_node;
	else
	{
		temp_node = *node;
		while (temp_node->next)
			temp_node = temp_node->next;
		
		new_node->prev = temp_node;
		temp_node->next = new_node;
	}

	return (new_node);
}
