#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - A function that allocates memory using malloc
 * *@b: The size of the memory block
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
	{
		exit(98);
	}
	return (pointer);
}
