#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list.
 * @h: Pointer to top of the list.
 *
 * Return: Total number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
	size_t total = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		total++;
	}

	return (total);
}
