#include "lists.h"

/**
 * free_listint2 - Frees a linked list as well.
 * @head: Top of a list.
 *
 * Return: None.
 */
void free_listint2(listint_t **head)
{
	listint_t *tempo;
	listint_t *initial;

	if (head != NULL)
	{
		initial = *head;
		while ((tempo = initial) != NULL)
		{
			initial = initial->next;
			free(tempo);
		}
		*head = NULL;
	}
}
