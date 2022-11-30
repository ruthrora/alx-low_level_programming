#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - free a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: Always 0
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		tepm = head;
		head = head->next;
		free(temp);
	}

	free(head);
}
