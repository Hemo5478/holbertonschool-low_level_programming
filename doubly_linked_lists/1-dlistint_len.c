#include "lists.h"

/**
 * dlistint_len -A function that returns the number of elements
 * @h: A pointer
 * Return: The number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t l = 0;

	while (h)
	{
		l++;
		h = h->next;
	}

	return (l);
}
