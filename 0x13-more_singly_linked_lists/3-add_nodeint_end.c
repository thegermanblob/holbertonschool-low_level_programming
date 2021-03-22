#include "lists.h"
/**
 * add_nodeint_end - adsds node to list
 * @head: beggining of list
 * @n: dded to list
 * Return: returns pointer to added node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *last;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);


	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = temp;
	}
	return (*head);
}

