#include "lists.h"

/**
 * sum_dlistint- return the sum of all the data (n) of a dlistint_t linked list
 *
 * @node:        the head node of a dlistint_t linked list
 *
 * Return:       int; the number of nodes
 * 
*/

int sum_dlistint(dlistint_t *node)
{
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}