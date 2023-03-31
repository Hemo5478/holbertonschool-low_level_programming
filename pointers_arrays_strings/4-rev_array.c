#include "main.h"

/**
 * *reverse_array - A function that reverses the content of an array
 * @a: An array of integers
 * @n: The number of elements to swap
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void reverse_array(int *a, int n)
{
	int i, j, p;

	i = 0;
	j = n - 1;
	while (i < (n / 2))
	{
		p = a[i];
		a[i] = a[j];
		a[j] = p;
		i++;
		j--;
	}
}
