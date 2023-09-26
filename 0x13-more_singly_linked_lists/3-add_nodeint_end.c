#include "lists.h"
/**
 * add_nodeint_end: Adds node to the end of listint_t.
 * @head: Pointer point to the head of the list.
 * @n: Value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node;
	listint_t *temp = *head;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = node;
	return (node);
}
