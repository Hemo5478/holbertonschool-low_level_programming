#include "lists.h"
#include <stdlib.h>

/**
 * free_list - A function that frees a list_t list
 * @head: A pointer
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
