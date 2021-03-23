#include "lists.h"
#include <stdlib.h>
/**
 *
 *
 *
 */
int pop_list(listint_t **head)
{
	int n;
	listint_t *temp;

	n = 0;

	if(head)
	{
		if (*head)
		{
			temp = (*head)->next;
			n = (*head)->n;
			free(*head);
			*head = tmp;
		}
	}
	return (n);
}

