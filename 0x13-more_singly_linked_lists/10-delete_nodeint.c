#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at index
 * @head: head
 * @index: location of node to delete
 * Return: -1 if fail 1 if succ
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newn, *cur;
	unsigned int i;

	i = 0;
	newn = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = newn->next;
		free(newn);
		return(1);
	}
	while (i != index)
	{
		cur = newn;
		newn = newn->next;
		if (newn == NULL)
			return (-1);
		i++;
	}

	cur->next = newn->next;
	free(newn);
	return (1);
}

