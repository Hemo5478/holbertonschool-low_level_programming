#include <stdlib.h>
#include "main.h"

/**
 * array_range - A function that creates an array of integers.
 * @min: Start range
 * @max: End range
  * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * (max - min + 1));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
