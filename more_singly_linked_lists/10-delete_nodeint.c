#include "lists.h"

/**
 * delete_nodeint_at_index- delete the node at index of a listint_t linked list
 *
 * @node:                   the head node in a linked list
 * @index:                  the index of the node to delete, 0 based
 *
 * Return:                  1 success, -1 fail
 *
 */

int delete_nodeint_at_index(listint_t **node, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp_node = *node;
	listint_t *delete_node;

	if (*node == NULL)
		return (-1);

	if (index == 0)
	{
		*node = (*node)->next;
		free(temp_node);
		return (1);
	}

	while (count < index - 1)
	{
		temp_node = temp_node->next;
		count++;
	}

	if (count == index)
	{
		delete_node = temp_node->next;
		temp_node->next = delete_node->next;
		free(delete_node);
		return (1);
	}

	return (-1);

}
