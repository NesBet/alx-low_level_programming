#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at given index
 * of a listint_t linked list.
 * @head: Top of a list.
 * @index: Index of the list where the node should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *p;
	listint_t *next;

	p = *head;

	if (index != 0)
	{
		for (a = 0; a < index - 1 && p != NULL; a++)
		{
			p = p->next;
		}
	}

	if (p == NULL || (p->next == NULL && index != 0))
	{
		return (-1);
	}

	next = p->next;

	if (index != 0)
	{
		p->next = next->next;
		free(next);
	}
	else
	{
		free(p);
		*head = next;
	}

	return (1);
}
