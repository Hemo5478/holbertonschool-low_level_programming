#include "lists.h"

/**
 * print_dlistint - A function that Prints all elements of a dlistint_t list
 * @h: A pointer to the head of the dlistint_t list
 * Return: Counter
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}

	return (counter);
}
