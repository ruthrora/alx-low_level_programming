#include "lists.h"
/**
 * dlistint_len -  returns the number of elements in a linked list
 * @h: header to the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *curr = h;

	while (curr != NULL)
	{
		count++;
		curr = curr->next;
	}
	return (count);
}
