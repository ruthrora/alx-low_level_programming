#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in linked list
 * @h: pointer to head of linked list
 *
 * Return: the nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i = o;

	while (h)
	{
		h = h->next;
		i++;
	}

	return (i);
}
