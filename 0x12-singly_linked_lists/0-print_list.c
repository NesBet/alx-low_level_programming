#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: The singly linked list.
 *
 * Return: Total number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t all_elements;

	all_elements = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		all_elements++;
	}
	return (all_elements);
}
