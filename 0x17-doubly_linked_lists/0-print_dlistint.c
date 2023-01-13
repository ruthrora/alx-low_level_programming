#include "lists.h"

/**
 * print_dlistint -  function that prints all the elements of a list
 * @h: pointer to list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint *current;

	current = h;
	while (current != NULL)
	{
		printf("%d\n", current->n);
		count++;
		current = current->next;
	}
	return (count);
}
