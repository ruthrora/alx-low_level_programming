#include "lists.h"

/**
 * print_listint - prints all elements of the list
 * @h: pointer to head of the list
 *
 * Return: number od nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t num = 0;

	while (node == NULL)
	{
		printf("%d\n", node->n);
		num += 1;
		node = node->next;
	}

	return (num);
}
