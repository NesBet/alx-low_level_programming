#include "lists.h"

/**
 * free_list - Frees a list.
 * @head: First node of the linked list.
 * Return: NULL.
 */

void free_list(list_t *head)
{
	list_t *innit;

	while ((innit = head) != NULL)
	{
		head = head->next;
		free(innit->str);
		free(innit);
	}
}
