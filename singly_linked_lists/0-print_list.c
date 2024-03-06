#include "lists.h"

/**
 * print_list- a function that prints all the elements of a list_t list
 *
 * Write a function that prints all the elements of a list_t list.
 *
 *  * Prototype: size_t print_list(const list_t *);
 *  * Returns: the number of nodes
 *  * Format: see example
 *  * If str is NULL, print [0] (nil)
 *  * You are allowed to use printf
 *
 * @node:      the head list node
 *
 * Return:     the size of the list
 *
 */

size_t print_list(const list_t *node)
{
	int i = 0;

	if (node == NULL)
		return (NULL);

	while (node)
	{
		printf("[%d] ", node->len);
		if (node->str)
			printf("%s\n", node->str);
		else
			printf("(nil)\n");

		i++;
		node = node->next;
	}

	return (i);
}
