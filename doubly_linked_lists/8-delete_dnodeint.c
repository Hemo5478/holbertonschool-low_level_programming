#include "lists.h"

/**
 * delete_dnodeint_at_index - A function that deletes the node
 * @head: A double pointer
 * @index: An index
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *tmp;
	unsigned int y;

	if (!*head)
		return (-1);

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free(current);
		return (1);
	}

	y = 0;
	while (current && y < index - 1)
	{
		current = current->next;
		y++;
	}

	if (!current || !(current->next))
		return (-1);

	tmp = current->next->next;
	free(current->next);
	current->next = tmp;

	if (current != NULL && current->next == NULL)
	{
		current->next->prev = current;
	}

	return (1);
}
