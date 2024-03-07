#include "lists.h"

/**
 * get_nodeint_at_index- return the nth node of a listint_t linked list
 *
 *                       Write a function that returns the nth node of a
 *                       listint_t linked list.
 *
 *                       * Prototype:
 *                         listint_t *get_nodeint_at_index(listint_t *head,
 *                         unsigned int index);
 *                       * where index is the index of the node, starting at 0
 *                       * if the node does not exist, return NULL
 *
 * @node:                the head node of a listint_t linked list
 * @index:               the index of the node to return
 *
 * Return:               the found node or NULL if the node does not exist
 *
 */

listint_t *get_nodeint_at_index(listint_t *node, unsigned int index)
{
	unsigned int count = 0;

	while (node)
	{
		if (count == index)
			return (node);
		count++;
		node = node->next;
	}

	return (node);
}
