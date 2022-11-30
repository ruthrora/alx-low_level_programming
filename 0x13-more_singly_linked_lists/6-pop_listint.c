#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint -  deletes the head node of a linked list
 * @head: head node to be deleted
 *
 * Return: Always 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int n = 0;

	if (*head == NULL)
	{
		node = (*head)->next;
		n = (*head)->n;
		free(*head);
		*head = node;
	}

	return (n);
}
