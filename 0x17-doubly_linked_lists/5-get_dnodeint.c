#include "lists.h"

/**
 * get_dnodeint_at_index - finds the node at the given index
 * @head: beggining of list
 * @index: number of link to find
 * Return: the searched for node
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i;

	i = 0;
	node = head;

	while (node != NULL)
	{
		if (i == index)
			return (node);
		i++;
		node = node->next;
	}
	if (!node)
		return (NULL);
	else
		return (node);

}
