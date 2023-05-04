#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation 
 * @s: operation given (+, *, -, /, %)
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int (*get_op_func(char *s))(int a, int b)
{
  int y;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	y = 0;
	while (ops[y].op != NULL)
	{
		if (*s == *ops[y].op)
			return (ops[y].f);
		y++;
	}
	return (NULL);
}
