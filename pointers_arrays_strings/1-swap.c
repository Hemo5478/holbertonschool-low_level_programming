#include "main.h"

/**
 * swap_int - A function that swaps the values of two integers
 * @a: A number
 * @b: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;
}
