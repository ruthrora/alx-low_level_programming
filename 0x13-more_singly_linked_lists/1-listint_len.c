#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elemnts in linked list
 * @h: pointer to head of the list
 *
 * Return: Always 0
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (0);
}
