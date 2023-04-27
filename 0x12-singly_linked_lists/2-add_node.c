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
	size_t linked;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (linked = 0; str[linked]; linked++)
		;

	new->len = linked;
	new->next = *head;
	*head = new;

	return (*head);
}
