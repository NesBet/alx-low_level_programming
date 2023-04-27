#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a list_t list.
 * @head: First node of the linked list.
 * @str: String to be stored in the list.
 * Return: Memory address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (node = 0; str[node]; node++);

	new->len = node;
	new->next = *head;
	*head = new;

	return (*head);
}
