#include <stdio.h>
#include "function_pointers.h"

/**
 * *print_name - A function that prints a name
 * * @name: A pointer to the first character of string
 * * @f: A pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}
