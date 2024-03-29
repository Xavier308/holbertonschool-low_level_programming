#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
 * get_op_func - Selects the correct function to perform the operation
 * asked by the user based on the operator given as an argument.
 * @s: The operator passed as an argument.
 * Return: Pointer to the function that corresponds to the operator,
 * or NULL if no matching operator is found.
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

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op && strlen(s) == 1)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}

