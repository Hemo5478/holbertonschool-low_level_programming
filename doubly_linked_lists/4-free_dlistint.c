#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: A pointer
 * Return: Void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
