#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer.
 * @array: A pointer to an array of integers
 * @size: The number of elements in the array
 * @cmp: A pointer to function
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}

	y = 0;
	do {
		if (cmp(array[y]) != 0)
		{
			return (y);
		}
		y++;
	} while (y < size);

	return (-1);
}
