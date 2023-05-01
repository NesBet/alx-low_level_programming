#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list.
 * @h: Pointer to head of a list.
 *
 * Return: Total number of nodes in linked list.
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
