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

listint_t *insert_nodeint_at_index(listint_t **node, unsigned int index, int data)
{
	unsigned int count = 1;
	listint_t *temp_node;
	listint_t *new_node;

	temp_node = *node;

	if (index == 0)
		return(add_nodeint(node, data));

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL || temp_node == NULL)
		return (NULL);

	while ((count + 1 < index) && temp_node)
	{
		temp_node = temp_node->next;
		count++;
        }

	if (count == index - 1)
	{
		new_node->n = data;
		new_node->next = temp_node->next;
		temp_node->next = new_node;
	}

	return (new_node);
}

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
