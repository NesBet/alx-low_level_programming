#include "lists.h"

/**
 * find_listint_loop - Finds the loop in a linked list.
 * @head: Top of a list.
 *
 * Return: Address of the node where the loop begins.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pa;
	listint_t *prev;

	pa = head;
	prev = head;
	while (head && pa && pa->next)
	{
		head = head->next;
		pa = pa->next->next;

		if (head == pa)
		{
			head = prev;
			prev =  pa;
			while (1)
			{
				pa = prev;
				while (pa->next != head && pa->next != prev)
				{
					pa = pa->next;
				}
				if (pa->next == head)
					break;

				head = head->next;
			}
			return (pa->next);
		}
	}

	return (NULL);
}
