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
	lists_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
