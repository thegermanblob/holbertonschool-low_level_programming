#include "lists.h"

/**
 * print_listint - prints list
 * @h: list to print
 * Return: returns number of elements printed
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *n;
	size_t i = 0;

	n = h;

	while (n != NULL)
	{
		printf("%i\n", n->n);
		n = n->next;
		i++;
	}
	return (i);
}
