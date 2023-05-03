#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - A function that print_diagsums
 * @a: A pointer
 * @size: The size of the square matrix
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int s1, s2;

	i = 0;
	j = size - 1;
	s1 = 0;
	s2 = 0;
	while (i < size)
	{
		s1 = s1 + a[i * size + i];
		s2 = s2 + a[i * size + j];
		i++;
		j--;
	}

	printf("%d, %d\n", s1, s2);
}
