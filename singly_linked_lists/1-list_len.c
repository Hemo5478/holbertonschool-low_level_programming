#include "lists.h"

/**
 * list_len - A function that returns the number of elements in a linked list
 * @h: A pointer
 * Return: The number of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t l;

	l= 0;
	while (h)
	{
		l++;
		h = h->next;
	}

	return (l);
}
