#include "lists.h"

/**
 * add_node_end- add a new node at the end of a list_t list.
 *
 *               Write a function that adds a new node at the end of a list_t
 *               list.
 *
 *               * Prototype: list_t *add_node_end(list_t **head, const char
 *                            *str);
 *               * Returns:   the address of the new element, or NULL if it
 *                            failed
 *               * str needs to be duplicated
 *               * You are allowed to use strdup
 *
 * @head:        the head of the linked list
 * @str:         a string to add to the new node
 *
 * Return:       the address of the new element of NULL if it failed
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = NULL;
	list_t *temp_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(_strlenconst(str) + 1);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	_strcpyconst(new_node->str, str);
	new_node->len = _strlenconst(str);
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp_node = *head;
		while (temp_node->next)
			temp_node = temp_node->next;

		temp_node->next = new_node;
	}

	return (new_node);
}
#include "lists.h"

/**
 * _strcpyconst-  copy a const string
 *
 * @dest:         where to put the copy
 * @src:          what to copy
 *
 * Return:        pointer to @dest
 */

char *_strcpyconst(char *dest, const char *src)
{
	int position = 0;
	bool exit = 0;

	while (!exit)
	{
		dest[position] = src[position];
		if (src[position] == 0)
			exit = true;
		position++;
	}

	return (dest);
}

/**
 * _strlenconst-  determine the length of a const string
 *
 * @s:            the string to find the longness of
 *
 * Return:        the longness of the string
 *
 */

int _strlenconst(const char *s)
{
	int pos = 0;

	while (s[pos] != 0)
		pos++;

	return (pos);
}
