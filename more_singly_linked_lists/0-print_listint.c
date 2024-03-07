#include "lists.h"

/**
 * print_listint- a function to print all the elements of a listint_t list
 *
 *                Write a function that prints all the elements of a listint_t
 *                list.
 *                * Prototype: size_t print_listint(const listint_t *);
 *                * Returns:   the number of nodes
 *                * Format:    see example
 *                * You are allowed to use printf
 *
 * @node:         the head node of the listint_t list
 *
 * Return:        the number of nodes
 *
 */

size_t print_listint(const listint_t *node)
{
	size_t i = 0;

	if (node == NULL)
		return (0);

	while (node)
	{
		printf("%d\n", node->n);
		i++;
		node = node->next;
	}

	return (i);
}
