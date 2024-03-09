#include "lists.h"

/**
 * insert_nodeint_at_index- a function that inserts a new node to a listint_t
 *                          linked list at a given position
 *
 *                          Write a function that inserts a new node at a given
 *                          position.
 *
 *                          * Prototype:
 *                            listint_t *insert_nodeint_at_index(listint_t
 *                            **head, unsigned int idx, int n);
 *                          * where idx is the index of the list where the new
 *                            node should be added. Index starts at 0
 *                          * Returns: the address of the new node, or NULL if
 *                            it failed
 *                          * if it is not possible to add the new node at
 *                            index idx, do not add the new node and return
 *                            NULL
 *
 * @node:                   the head node of a listint_t linked list
 * @index:                  the index at which to insert the new node
 * @n:                      the data to put in the new node
 *
 * Return:                  the address of the new node or NULL if failure
 *
 */

listint_t *insert_nodeint_at_index(listint_t **node, unsigned int index, int n)
{
	unsigned int count = 1;
	listint_t *temp_node;
	listint_t *new_node;

	temp_node = *node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || temp_node == NULL)
		return (NULL);

	while ((count + 1 < index) && temp_node)
	{
		temp_node = temp_node->next;
		count++;
        }

	if (pos == idx - 1)
	{
		new_node->next = temp_node->next;
		temp_node->next = new_node;
	}

	return (new_node);
}
