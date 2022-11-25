#include "lists.h"
#include <stdio.h>

/**
 * print_list -  prints all the elements of a list_t list.
 * @h: pointer to the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("%d\n", h->);
		h = h->next;
	}
	return (i);
}
