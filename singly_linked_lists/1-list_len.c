#include "lists.h"

/**
 * list_len- a function that returns the nuber of elements in a linked list_t
 *           list
 *
 *           Write a function that returns the number of elements in a linked
 *           list_t list.
 *
 *           * Prototype: size_t list_len(const list_t *h);
 *
 * @node:    the head node of the linked list
 *
 * Return:   the number of elements in the linked list
 *
 */

size_t list_len(const list_t *node)
{
	int i = 0;

	if (node == NULL)
		return (0);

	while (node)
	{
		i++;
		node = node->next;
	}

	return (i);
}
