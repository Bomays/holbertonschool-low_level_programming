#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to perform
 * the operation asked by the user.
 *
 * @s: operator passed as argument to the program
 *
 * Return: returns a pointer to the function that corresponds
 * to the operator given as a parameter.
 * If s does not match any of the 5 expected operators (+, -, *, /, %),
 * return NULL
 * Example: get_op_func("+") should return a pointer
 * to the function op_add
 */
int (*get_op_func(char *s))(int, int)
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

	while (ops[i].op != NULL) /* verify that operation
				   * functions op are not NULL
				   */
	{
		if (s != NULL && *(ops[i].op) == *s && s[1] == '\0')
			/*
			* if s is not NULL && compare first character (using *)
			* in s with first character in i for matching &&
			* being sure that s is only one character
			*/
		{
			return (ops[i].f);
			/*
			 * return pointer of one of the op function of the
			 * table structure according to the i input*
			 * f is declared in the typedef headerfile
			 */
		}
		i++;
	}
	return (NULL);
}
