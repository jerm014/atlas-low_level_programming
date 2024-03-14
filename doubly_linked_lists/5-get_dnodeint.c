#include "lists.h"

/**
 * get_dnodeint_at_index- return the nth node of a dlistint_t linked list
 *
 * @node:                 the nead of the dlistint linked list
 * @index:                the index of the node to return (0-based)
 *
 * Return:                a node from the dlistint_t
 *
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *node, unsigned int index)
{
	unsigned int count = 0;

	while ((count != index) && (node->next))
	{
		node = node->next;
		count++;
	}

	if (count == index)
		return (node);

	return (NULL);
}
