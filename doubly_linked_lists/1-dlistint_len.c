#include "lists.h"

/**
 * dlistint_len- print all the elements of a dlistint_t list
 *
 * @h:             pointer to the head of the dlistint_t list
 *
 * Return:         the number of nodes
 *
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
