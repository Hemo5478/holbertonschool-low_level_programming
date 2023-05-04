#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - A function that inserts a new node
 * @h: A pointer to a pointer
 * @idx: An index
 * @n: A value for the new node
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int y;

	if (idx == 0)
		return (add_dnodeint(h, n));
  
	if (h == NULL)
		return (NULL);

	current = *h;
	y = 0;
	while (y < idx - 1)
	{
		if (current)
			return (NULL);
		current = current->next;
		y++;
	}

	if (!current)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->prev = current;
	new_node->next = current->next;

	if (current->next != NULL)
		current->next->prev = new_node;

	current->next = new_node;

	return (new_node);
}
