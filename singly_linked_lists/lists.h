#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* 0 */
size_t print_list(const list_t *);

/* 1 */
size_t list_len(const list_t *);

/* 2 */
list_t *add_node(list_t **, const char *);

/* 3 */
list_t *add_node_end(list_t **, const char *);

/* 4 */
void free_list(list_t *);

/* 2 & 3 asssit */
char *_strcpyconst(char *, const char *);
int _strlenconst(const char *);

#endif
