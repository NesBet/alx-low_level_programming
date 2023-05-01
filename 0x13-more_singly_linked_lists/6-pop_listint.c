#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list.
 * @head: Top of a list.
 *
 * Return: Contents of node's head.
 */
int pop_listint(listint_t **head)
{
	int node;
	listint_t *t;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	node = current->n;

	t = current->next;

	free(current);

	*head = t;

	return (node);
}
