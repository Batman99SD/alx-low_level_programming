#include "lists.h"

/**
 * pop_listint - deletes the head node of a list.
 * @head: pointer to head node
 * Return: n or 0
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data = 0;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	data = temp->n;

	*head = (*head)->next;

	free(temp);
	return (data);
}
