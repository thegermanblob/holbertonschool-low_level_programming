#include "lists.h"
/**
 * sum_dlistint - prints list
 * @head:head of list
 * Return: lenght of list
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
