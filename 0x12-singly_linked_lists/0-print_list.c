#include "lists.h"

size_t print_list(const list_t *h)
{
	const list_t *n;
	size_t i = 0;

	n = h;

	while(n != NULL)
	{
		printf("[%i] %s\n", n->len, n->str);
		n = n->next;
		i++;
	}


	return (i);
}
