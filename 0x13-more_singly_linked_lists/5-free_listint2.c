#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 -  frees a listint_t list.
 * @head: list to be freed
 *
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = (*head);
			*head = (*head)->next;
			free(tmp);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
