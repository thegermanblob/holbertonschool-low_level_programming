#include "lists.h"
/**
 * listint_len - prints lists
 * @h: list to be printed
 * Return: returns the amount of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *n;
	size_t i = 0;

	n = h;

	while (n != NULL)
	{
		n = n->next;
		i++;
	}


	return (i);
}
