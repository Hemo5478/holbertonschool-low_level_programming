#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0
 * @n: A pointer
 * @index: An index
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ugh;

	if (!n || index >= sizeof(unsigned long int) * 8)
		return (-1);

	ugh = 1UL << index;
	*n &= ~ugh;

	return (1);
}
