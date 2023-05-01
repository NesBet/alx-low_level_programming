#include "lists.h"

/**
 * free_listp2 - Frees a linked list also.
 * @head: Top of a list.
 *
 * Return: None.
 */
void free_listp2(listpoi_t **head)
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
 * free_listint_safe - Frees a linked list.
 * @h: Top of a list.
 *
 * Return: Size of freed list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nodes = 0;
	listpoi_t *ptr, *new, *add;
	listint_t *curr;

	ptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listpoi_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (nodes);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nodes++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (nodes);
}
