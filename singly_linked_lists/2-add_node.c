#include "lists.h"

/**
 * add_node- a function that adds a new node at the beginning of a list_t list
 *
 *            Write a function that adds a new node at the beginning of a 
 *            list_t list.
 *
 *            * Prototype: list_t *add_node(list_t **head, const char *str);
 *            * Returns: the address of the new element, or NULL if it failed
 *            * str needs to be duplicated
 *            * You are allowed to use strdup
 *
 * @head:     the top node of a list_t list
 * @str:      a string to put in the new node
 *
 * Return:    a pointer to the new element
 *
 */

list_t *add_node(list_t **head, const char *str)i
{
	list_t *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(_strlen(str) + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	_strdup:wq
		(new_node->str, str);
	new_node->next = *head->next;

	*head->next = new_node;
