#include "lists.h"

/**
 * delete_dnodeint_at_index- delete the node at index of a dlistint_t linked
 *                           list
 *
 * @node:                    the head of a dlistint_t linked list
 * @index:                   the node to remove
 *
 * Return:                   1 success; -1 fail
 *
*/

int delete_dnodeint_at_index(dlistint_t **node, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp_node;

	if (!(*node))
		return (-1);
		
	temp_node = *node;

	if (index == 0)
	{
		(*node)->next->prev = NULL;
		temp_node = *node;
		(*node) = (*node)->next;
		free(temp_node);
		return (1);
	}

	while ((count != index) && temp_node)
	{
		temp_node = temp_node->next;
		count++;
	}

	if (count == index)
	{
		temp_node->prev->next = temp_node->next;
		if (temp_node->next)
			temp_node->next->prev = temp_node->prev;
		free(temp_node);

		return (1);
	}

	return (-1);
}