#include "lists.h"

/**
 * insert_dnodeint_at_index- insert a new node at a given index
 *
 * @node:                    the head of a dlistint_t linked list
 * @index:                   the index to put the new node (0-based)
 * @n:                       the value to store in the n of the new node
 *
 * Return:                   the address of the new node or NULL if it failed
 *
 */

dlistint_t
*insert_dnodeint_at_index(dlistint_t **node, unsigned int index, int n)
{
	unsigned int count = 0;
	dlistint_t *temp_node;
	dlistint_t *new_node;

	temp_node = *node;

	if (index == 0)
		return (add_dnodeint(node, n));

	if (index == dlistint_len(*node))
		return(add_dnodeint_end(node, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	while ((count + 1 < index) && temp_node)
	{
		temp_node = temp_node->next;
		count++;
	}

	if (count == index - 1)
	{
		new_node->n = n;
		(temp_node->prev)->prev = new_node;
		new_node->prev = temp_node->prev;
		new_node->next = temp_node;
		temp_node->next = new_node;

		return (new_node);
	}

	return (NULL);
}

#include "0-print_dlistint.c"
#include "1-dlistint_len.c"
#include "2-add_dnodeint.c"
#include "3-add_dnodeint_end.c"
#include "4-free_dlistint.c"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    dlistint_t *head;

    head = NULL;
    add_dnodeint_end(&head, 0);
    add_dnodeint_end(&head, 1);
    add_dnodeint_end(&head, 2);
    add_dnodeint_end(&head, 3);
    add_dnodeint_end(&head, 4);
    add_dnodeint_end(&head, 98);
    add_dnodeint_end(&head, 402);
    add_dnodeint_end(&head, 1024);
    print_dlistint(head);
    printf("-----------------\n");
    insert_dnodeint_at_index(&head, 5, 4096);
    print_dlistint(head);
    free_dlistint(head);
    head = NULL;
    return (EXIT_SUCCESS);
}