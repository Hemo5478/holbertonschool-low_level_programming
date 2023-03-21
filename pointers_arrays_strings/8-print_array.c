#include "main.h"
#include <stdio.h>

/**
 * print_array - A function that prints n elements of an array of integers
 * @a: A number
 * @n: A number
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
