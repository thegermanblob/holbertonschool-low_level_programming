#include "lists.h"
/**
 * print_list - prints lists
 * @h: list to be printed
 * Return: returns the amount of elements printed
 */
size_t print_list(const list_t *h)
{
	const list_t *n;
	size_t i = 0;

	n = h;

	while (n != NULL)
	{
		if (n->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", n->len, n->str);
		n = n->next;
		i++;
	}


	return (i);
}
