#include "variadic_functions.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	print_strings("; ", 4, "You know", "", "nothing", NULL);
	print_strings(NULL, 2, "Jay", "Django");
	return (0);
}
