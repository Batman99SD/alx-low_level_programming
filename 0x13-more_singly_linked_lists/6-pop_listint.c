#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * Return: The data (n) of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);

	listint_t *tmp = *head;
	data = tmp->n;
	*head = (*head)->next;
	free(tmp);

	return (data);
}
