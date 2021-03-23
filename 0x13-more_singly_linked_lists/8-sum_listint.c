#include "lists.h"

/**
 * sum_listint - sums list
 * @head: head of list to sum
 * Return: result
 *
 */
int sum_listint(listint_t *head)
{
	int r;

	r = 0;
	while (head)
	{
		r += head->n;
		head = head->next;
	}
	return (r);
}
