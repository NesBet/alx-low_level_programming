#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: First node of linked list.
 * @str: String to be stored in the list.
 * Return: Memory address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t linked;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);

	for (linked = 0; str[linked]; linked++)
		;

	new->len = linked;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
