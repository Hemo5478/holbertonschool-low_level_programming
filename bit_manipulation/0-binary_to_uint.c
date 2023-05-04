#include "main.h"

/**
 * binary_to_uint - A function that converts a binary number
 * @b: A pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b == '0')
			n = n << 1;
		else if (*b == '1')
			n = (n << 1) | 1;
		else
			return (0);
		b++;
	}
	return (n);
}
