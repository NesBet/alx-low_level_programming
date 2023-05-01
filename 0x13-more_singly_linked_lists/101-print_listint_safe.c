#include "lists.h"

/**
 * free_listp - Frees a linked list.
 * @head: Top of a list.
 *
 * Return: None.
 */
void free_listp(listpoi_t **head)
{
	listpoi_t *tempo;
	listpoi_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((tempo = curr) != NULL)
		{
			curr = curr->next;
			free(tempo);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - Prints a linked list.
 * @head: Top of a list.
 *
 * Return: Total number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	listpoi_t *ptr, *new, *add;

	ptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listpoi_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (nodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nodes++;
	}

	free_listp(&ptr);
	return (nodes);
}
