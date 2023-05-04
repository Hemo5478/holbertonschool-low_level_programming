#include "main.h"

/**
 * set_bit - A function that sets the value of a bit to 1
 * @n: A number
 * @index: An index
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int ugh;

	if (!n)
	{
		return (-1);
	}

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	ugh = ((unsigned long int) 1) << index;
	*n = (*n | ugh);
	return (1);
}
