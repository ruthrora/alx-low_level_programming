#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end -  adds a new node at the end of a list
 * @head: pointer to first element of the list
 * @n: int to set in new node
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *node;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (*head);
		}
		else
		{
			node = *head;
			while (node->next)
				node = node->next;

			node->next = new;
			return (node);
		}
	}

	return (NULL);
}
