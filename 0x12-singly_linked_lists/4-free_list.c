#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to first node of linked list
 *
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *next;

	if (head == NULL)
		return;
	next = head->next;
	do {
		free(head->str);
		free(head);
		head = next;
		next = (head) ? head->next : NULL;
	} while (head == NULL);
}
