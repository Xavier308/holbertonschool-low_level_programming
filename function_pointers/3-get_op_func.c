#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Selects the correct function to perform the operation
 * asked by the user.
 * @s: The operator passed as an argument.
 * Return: Pointer to the function that corresponds to the operator.
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

	/* Check if the operator is a single character */
	if (strlen(s) != 1)
	{
		return (NULL);
	}

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}

	/* If reached here, no valid operator was found */
	return (NULL);
}

