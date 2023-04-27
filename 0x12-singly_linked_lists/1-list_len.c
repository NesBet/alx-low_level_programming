#include "lists.h"

/**
 * list_len - Returns umber of elements in a list.
 * @h: The singly linked list.
 * Return: Total number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t no_elements;

	no_elements = 0;
	while (h != NULL)
	{
		h = h->next;
		no_elements++;
	}
	return (no_elements);
}
