#include "lists.h"

/**
 * sum_listint- return the sum of all the data(n) of a listint_t linked list
 *
 *              Write a function that returns the sum of all the data (n) of a
 *              listint_t linked list.
 *
 *              * Prototype: int sum_listint(listint_t *head);
 *              * if the list is empty, return 0
 *
 * @node:       the head node of a list_t linked list
 *
 * Return:      the sum of all node->n in the linked list starting at node
 *
 */

int sum_listint(listint_t *node)
{
	int sum = 0;

	while (node)
	{
		sum += node->n;
		node = node->next;
	}

	return (sum);
}
