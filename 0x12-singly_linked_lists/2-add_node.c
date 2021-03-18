#include "lists.h"
#include <string.h>
/**
 * add_node - adsds node to list
 * @head: beggining of list
 * @str: string to be added to list
 * Return: returns pointer to added node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int i = 0;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);


	if (str == NULL)
	{
		temp->str = NULL;
		temp->len = 0;
	}
	else
	{
		temp->str = strdup(str);
		while (str[i])
		{
			i++;
		}
		temp->len = i;
	}
	temp->next = *head;
	*head = temp;
	return (temp);
}


