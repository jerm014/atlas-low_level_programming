#include "lists.h"

/**
 * add_nodeint- a function that adds a new node at the beginning of a listint_t
 *              list
 *
 *              Write a function that adds a new node at the beginning of a
 *              listint_t list.
 *
 *              * Prototype: listint_t *add_nodeint(listint_t **, const int);
 *              * Returns:   the address of the new element, or NULL if it
 *                           failed
 *
 * @node:      the head node of the listint_t list
 * @n:         a number to put in the new node
 *
 * Return:    ` a pointer to the new element or NULL if it failed
 *
 */

listint_t *add_nodeint(listint_t **node, const int n)
{
	listint_t *new_node = NULL;

	if (node == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *node;

	*node = new_node;

	return (*node);
}
