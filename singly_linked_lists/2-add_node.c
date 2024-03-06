#include "lists.h"

/**
 *
 * Write a function that adds a new node at the beginning of a list_t list.
 *
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Returns: the address of the new element, or NULL if it failed
 * str needs to be duplicated
 * You are allowed to use strdup
 *
 * add_node- a function that adds a new node at the begginging of a list_t list
 *
 * head:     the top node of a list_t list
 * str:      a string to put in the new node
 *
 * Return:   the address of the new element
 *
 */

list_t *add_node(list_t **head, const char *str)
