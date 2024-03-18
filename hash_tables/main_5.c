#include <stdlib.h>
#include "0-hash_table_create.c"
#include "1-djb2.c"
#include "2-key_index.c"
#include "3-hash_table_set.c"
#include "6-hash_table_delete.c"
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(10);
	hash_table_set(ht, "Holberton", "is cool");
	hash_table_set(ht, "Holberton", "is soooo cooool");
	hash_table_set(ht, "Holberton", "is awesome");
	hash_table_delete(ht);
	return (EXIT_SUCCESS);
}