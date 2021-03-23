#include "lists.h"
#include <stdlib.h>
/**
 * pop_listsint - deletes the head
 * @head: the head of the list
 * Return: new head
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	n = 0;

	if (head)
	{
		if (*head)
		{
			temp = (*head)->next;
			n = (*head)->n;
			free(*head);
			*head = temp;
		}
	}
	return (n);
}
