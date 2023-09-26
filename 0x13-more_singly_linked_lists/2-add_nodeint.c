#include "lists.h"
/**
 * add_nodeint - Adds nide to the beginning of a listint_t list.
 * @head: Pointer point to the head of list.
 * @n: Value stored in the nex node.
 * Return: The address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;

	return (node);
}
