#include "lists.h"
/**
 * sum_dlistint - prints list
 * @h:head of list
 * Return: lenght of list
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	puts("hi");

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
