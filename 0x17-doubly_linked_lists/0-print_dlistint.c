#include "lists.h"
/**
 * print_dlistint - prints list
 * @h:head of list
 * Return: lenght of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("%i\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
