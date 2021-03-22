#include "lists.h"

/**
 * add_nodeint - add node
 * @head: beggining of list
 * @n: data to add
 * Return: returns added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
