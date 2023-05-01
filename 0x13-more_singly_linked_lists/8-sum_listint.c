#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: Top of a list.
 *
 * Return: The sum.
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
