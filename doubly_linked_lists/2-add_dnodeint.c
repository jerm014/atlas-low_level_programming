#include "lists.h"

/**
 * add_dnodeint- a function that adds a new node at the beginning of a listint_t
 *               list
 *
 *               Write a function that adds a new node at the beginning of a
 *               listint_t list.
 *
 *               * Prototype: dlistint_t *add_dnodeint(dlistint_t **,
 *                            const int);
 *               * Returns:   the address of the new element, or NULL if it
 *                            failed
 *
 * @node:       the head node of the listint_t list
 * @n:          a number to put in the new node
 *
 * Return:    ` a pointer to the new element or NULL if it failed
 *
 */

dlistint_t *add_dnodeint(dlistint_t **node, const int n)
{
	dlistint_t *new_node = NULL;

	if (node == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *node;

	(*node)->prev = new_node;
	*node = new_node;

	return (*node);
}