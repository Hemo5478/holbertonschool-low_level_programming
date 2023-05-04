#include <stdio.h>
#include "dog.h"

/**
 * init_dog - A function that initialize a variable of type struct dog
 * @d: A pointer's struct of type
 * @name: The dog's name
 * @age: The dog's age
 * @owner:The dog's owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}
