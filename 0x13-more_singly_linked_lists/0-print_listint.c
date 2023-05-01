#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Top of a list.
 *
 * Return: Total number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
