#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth node
 * @head: The head
 * @index: An index for the node
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int y;

	for (y = 0; head != NULL && y < index; y++)
	{
		head = head->next;
	}

	if (y == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
