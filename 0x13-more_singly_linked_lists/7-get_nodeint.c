#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index-  returns the nth node of a listint_t linked list.
 * @head: head node of the list
 * @index: index of the node
 *
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node = 0;

	if (head)
	{
		while (head)
		{
			if (node == NULL)
				return (head);

			head = head->next;
			node++;
		}
	}

	return (NULL);
}
