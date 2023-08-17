#include "lists.h"

/**
 * sum_dlistint - Returns sum of all the data
 * of a doubly linked list.
 *
 * @head: Head of the dlist.
 *
 * Return: Summation result.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
