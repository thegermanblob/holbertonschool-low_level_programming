#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at location indicated
 * @head: begging of list
 * @idx: index of list
 * @n: data for new node
 * Return: new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newn, *cur;
	unsigned int i;

	i = 0;
	newn = malloc(sizeof(listint_t));
	if (newn == NULL)
		return (NULL);
	newn->n = n;
	if (i == 0)
	{
		newn->next = *head;
		*head = newn;
		return (newn);
	}
	if (*head != NULL)
	{
		cur = *head;
		while (cur != NULL && i < (idx - 1))
		{
			cur = cur->next;
			i++;
		}
		if (i == idx - 1)
		{
			newn->next = cur->next;
			cur->next = newn;
			return (newn);
		}
	}
	return (NULL);
}

