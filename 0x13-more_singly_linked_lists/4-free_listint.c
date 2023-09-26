#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to the start of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp = head;

	while (tmp != NULL)
	{
		listint_t *next = tmp->next;

		free(tmp);
		tmp = next;
	}
}
