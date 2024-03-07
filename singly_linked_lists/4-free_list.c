#include "lists.h"

/**
 * free_list- free a list_t list
 *
 *            Write a function that frees a list_t list.
 *
 *            * Prototype: void free_list(list_t *head);
 *
 * @head:     a list_t node to start with
 *
 * Return:    nothing
 *
 */

void free_list(list_t *head)
{
	list_t *temp_node;

	while (head)
	{
		temp_node = head;
		head = head->next;
		free(temp_node->str);
		free(temp_node);
	}
}
