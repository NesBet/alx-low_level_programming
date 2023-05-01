#include "lists.h"

/**
 * reverse_listint - Reverses a linked list.
 * @head: Top of a list.
 *
 * Return: Pointer to the 1st node.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pr;
	listint_t *ne;

	pr = NULL;
	ne = NULL;

	while (*head != NULL)
	{
		ne = (*head)->next;
		(*head)->next = pr;
		pr = *head;
		*head = ne;
	}

	*head = pr;
	return (*head);
}
