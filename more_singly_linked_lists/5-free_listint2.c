#include "lists.h"

/**
 * free_listint2- free a listint_t list
 *
 *                Write a function that frees a listint_t list
 *                * Prototype: void free_listint2(listint_t **node);
 *                * The function sets the head to NULL
 *
 * @node:         the head node of a listint_t list
 *
 * Return:        nothing
 *
 */

void free_listint2(listint_t **node)
{
	if (node == NULL)
		return (0);

	free_listint(*node);
	*node = NULL;
}


/**
 * free_listint- free a lintint_t list
 *
 * @node:        the head node of a listint_t list
 *
 * Return:       nothing
 *
 */

void free_listint(listint_t *node)
{
	listint_t *temp_node;

	while (node)
	{
		temp_node = node;
		node = node->next;
		free(temp_node);
	}
}
