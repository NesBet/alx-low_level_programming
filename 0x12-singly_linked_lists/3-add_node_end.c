#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: First node of linked list.
 * @str: String to be stored in the list.
 * Return: Memory address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tempo;
	size_t node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (node = 0; str[node]; node++);

	new->len = node;
	new->next = NULL;
	tempo = *head;

	if (tempo == NULL)
	{
		*head = new;
	}
	else
	{
		while (tempo->next != NULL)
			tempo = tempo->next;
		tempo->next = new;
	}

	return (*head);
}
