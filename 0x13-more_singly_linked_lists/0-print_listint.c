#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of the list
 * @h: pointer to head of the list
 *
 * Return: Always 0
 */
size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (0);
}
