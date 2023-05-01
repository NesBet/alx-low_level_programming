#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a linked list.
 * @head: Top of a list.
 * @n: Element.
 *
 * Return: Address of the new element if success,
 * NUll if error.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *tempo;

	(void)tempo;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	tempo = *head;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (tempo->next != NULL)
		{
			tempo = tempo->next;
		}
		tempo->next = new;
	}

	return (*head);
}
