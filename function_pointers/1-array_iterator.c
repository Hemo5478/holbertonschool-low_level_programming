#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - A function that executes a function
 * @array: An array of integers
 * @size: The size of the array
 * @action: A pointer to function
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t y;

	if (array && action)
	{
		y = 0;
		while (y < size)
		{
			action(array[y]);
			y++;
		}
	}
}
