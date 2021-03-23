#include "lists.h"

/**
 * get_nodeint_at_index - finds the node at the given index
 * @head: beggining of list
 * @index: number of link to find
 * Return: the searched for node
 *
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
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
	return (NULL);

}
