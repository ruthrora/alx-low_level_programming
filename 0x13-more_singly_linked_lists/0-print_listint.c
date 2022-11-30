#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements on the linked list
 * @h: pointer to head of linked list
 *
 * Return:  the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);

		h = h->next;
	}

	return (nodes);
}
