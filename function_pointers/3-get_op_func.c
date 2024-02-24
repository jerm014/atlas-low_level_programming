#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include "function_pointers.h"

/**
 * This file should contain the function that selects the correct function to
 * perform the operation asked by the user. You're not allowed to declare any
 * other function.
 *
 * Prototype: int (*get_op_func(char *s))(int, int);
 * 
 * get_op_func- selects correct function
 * 
 * @s: the operator passed as argument to the program
 *
 * This function returns a pointer to the function that corresponds to the
 * operator given as a parameter. Example: get_op_func("+") should return a
 * pointer to the function op_add
 * You are not allowed to use switch statements
 * You are not allowed to use for or do ... while loops
 * You are not allowed to use goto
 * You are not allowed to use else
 * You are not allowed to use more than one if statement in your code
 * You are not allowed to use more than one while loop in your code
 * If s does not match any of the 5 expected operators (+, -, *, /, %), return
 * NULL
 * You are only allowed to declare these two variables in this function:
 *   op_t ops[] = {
 *       {"+", op_add},
 *       {"-", op_sub},
 *       {"*", op_mul},
 *       {"/", op_div},
 *       {"%", op_mod},
 *       {NULL, NULL}
 *   };
 *   int i;
 *
 */

int (*get_op_func(char *s))(int, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
   	};
	int i = 0;

	while ((ops[i]).op)
	{
		if (*(ops[i].op) + '\0' == *s + '\0')
			return (ops[i].f);
		i++;
	}

	return (NULL);

}
