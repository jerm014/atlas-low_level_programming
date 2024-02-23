#include "function_pointers.h"

/**
 * print_name- print a name
 *
 * @name:      the name to print
 * @f:         function to print name
 *
 * Return:     nothing
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
