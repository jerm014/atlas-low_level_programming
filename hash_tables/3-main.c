#include "hash_tables.h"

#include "0-hash_table_create.c"
#include "1-djb2.c"
#include "2-key_index.c"
#include "3-main.c"


/**
 * main -  check the code
 *
 * Return: Always EXIT_SUCCESS
 *
 */

int main(void)
{
	hash_table_t *ht;
	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "cool");
	hash_table_set(ht, "betty", "cool1");
	hash_table_set(ht, "betty", "cool2");
	hash_table_set(ht, "betty", "cool3");
	hash_table_set(ht, "betty1", "ol");
	hash_table_set(ht, "betty4", "444cool");
	return (EXIT_SUCCESS);
}
