#include "lists.h"

/**
 * insert_dnodeint_at_index- insert a new node at a given index
 *
 * @node:                    the head of a dlistint_t linked list
 * @index:                   the index to put the new node (0-based)
 * @n:                       the value to store in the n of the new node
 *
 * Return:                   the address of the new node or NULL if it failed
 *
 */

dlistint_t
*insert_dnodeint_at_index(dlistint_t **node, unsigned int index, int n)
{
	unsigned int count = 0;
	dlistint_t *temp_node;
	dlistint_t *new_node;

	temp_node = *node;

	if (index == 0)
		return (add_dnodeint(node, n));

	if (index == dlistint_len(*node))
		return(add_dnodeint_end(node, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while ((count + 1 < index) && temp_node)
	{
		temp_node = temp_node->next;
		count++;
	}

	if (count == index - 1)
	{
		new_node->n = n;
		(temp_node->prev)->prev = new_node;
		new_node->prev = temp_node->prev;
		new_node->next = temp_node;
		temp_node->next = new_node;

		return (new_node);
	}

	return (NULL);
}

/**
 * dlistint_len- print all the elements of a dlistint_t list
 *
 * @h:             pointer to the head of the dlistint_t list
 *
 * Return:         the number of nodes
 *
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}