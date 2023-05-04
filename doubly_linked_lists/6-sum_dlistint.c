#include "lists.h"

/**
 * sum_dlistint - A function that returns the total of all the data (n)
 * @head: A pointer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *current = head;

	while (current)
	{
		total += current->n;
		current = current->next;
	}

	return (total);
}
