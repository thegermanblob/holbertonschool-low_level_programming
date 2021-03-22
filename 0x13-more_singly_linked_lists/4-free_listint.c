#include "lists.h"

/**
 * free_list - frees list
 * @head: list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
