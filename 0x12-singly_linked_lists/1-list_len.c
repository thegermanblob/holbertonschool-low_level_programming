#include "lists.h"
/**
 * list_len - prints lists
 * @h: list to be printed
 * Return: returns the amount of elements printed
 */
size_t list_len(const list_t *h)
{
	const list_t *n;
	size_t i = 0;

	n = h;

	while (n != NULL)
	{
		n = n->next;
		i++;
	}


	return (i);
}
