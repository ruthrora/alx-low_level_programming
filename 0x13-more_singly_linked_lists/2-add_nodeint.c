#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: head of the linked list
 * @n: number of nodes
 *
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_list;

	if (head == NULL)
	{
		new_list = malloc(sizeof(listint_t));

		if (new_list == NULL)
			return (NULL);

		new_list->n = n;
		new_list->next = *head;
		*head = new_list;

		return (new_list);
	}

	return (NULL);
}
