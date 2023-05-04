#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - A function that free dogs
 * @d: A pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
