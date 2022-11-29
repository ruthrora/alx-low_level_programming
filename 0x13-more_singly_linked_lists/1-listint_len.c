#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elemnts in linked list
 * @h: pointer to head of the list
 *
 * Return: number of the elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	if (!h)
		return (0);
	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
