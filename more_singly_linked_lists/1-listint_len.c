#include "lists.h"

/**
 * listint_len- a function to print all the elements of a listint_t list
 *
 *              Write a function that returns the number of elements in a
 *              linked listint_t list.
 *              * Prototype: size_t listint_len(const listint_t *);
 *
 * @node:       the head node of the listint_t list
 *
 * Return:      the number of nodes
 *
 */

size_t listint_len(const listint_t *node)
{
	size_t i = 0;

	if (node == NULL)
		return (0);

	while (node)
	{
		i++;
		node = node->next;
	}

	return (i);
}
