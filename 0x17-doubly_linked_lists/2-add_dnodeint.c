#include "lists.h"
/**
 * add_dnodeint - adds node at the beggining
 * @head:beggining of list
 * @n: value for node
 * Return:address of new node
 *
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		*head = new;
		return (new);
	}
	else
	{
		temp = *head;
		new->next = temp;
		temp->prev = new;
		*head = new;
		return (new);
	}

	return (new);
}
