#include "lists.h"
/**
 * sum_dlistint_len - prints list
 * @h:head of list
 * Return: lenght of list
 */
int sum_dlistint_len(const dlistint_t *h)
{
	int result = 0;

	while (h)
	{
		h = h->next;
		result += h->n;
	}
	return (result);
}
