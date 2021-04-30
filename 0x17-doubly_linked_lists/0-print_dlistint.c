#include "lists.h"
/**
 * print_dlistint - prints list
 * @h:head of list
 * Return: lenght of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *iterator;
	size_t i = 0;

	if (h)
		printf("%i\n", h->n);
	else
		return (0);


	if (h->next)
		iterator = h->next;
	while (iterator)
	{
		printf("%i\n", iterator->n);
		iterator = iterator->next;
		i++;
	}
	return (i);
}
