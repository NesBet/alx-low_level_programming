#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a
 * listint_t linked list.
 * @head: Top of a list.
 * @index: Index of the node.
 *
 * Return: The nth node if it exists, NULL if it doesn't.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
