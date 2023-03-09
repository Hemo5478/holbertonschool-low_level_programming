#include "main.h"

/**
 * mul - A function that multiplies two integers
 * @a: A number
 * @b: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int mul(int a, int b)
{
	int c;
	c = a * b;
	return (c);
}
