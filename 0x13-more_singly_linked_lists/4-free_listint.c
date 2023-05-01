#include "lists.h"

/**
 * free_listint - Frees a linked list.
 * @head: Top of a list.
 *
 * Return: None.
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while ((tempo = head) != NULL)
	{
		head = head->next;
		free(tempo);
	}
}
