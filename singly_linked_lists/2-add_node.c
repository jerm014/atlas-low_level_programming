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

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = NULL;

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

	new_node->len = _strlenconst(str);
	_strcpyconst(new_node->str, str);
	new_node->next = *head;

	*head = new_node;

	return (*head);
}

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
