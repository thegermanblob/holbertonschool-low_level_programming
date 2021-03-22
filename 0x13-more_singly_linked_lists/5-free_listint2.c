#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: list to free
 */
void free_listint2(listint_t **head)
{
	listint_t *temp, *temp2;

	if (head != NULL)
	{
		temp = *head;

		while (temp != NULL)
		{
			temp2 = temp->next;
			free(temp);
			temp = temp2;
		}
		*head = NULL;
	}
}
