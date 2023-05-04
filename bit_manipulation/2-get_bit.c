#include "main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 * @n: A number
 * @index: An index
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return (n >> index) & 1;
}
